library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
USE WORK.COMMANDS_LCD4BITS.ALL;

entity CPU_STATEMACHINE is
	PORT(CLK: IN STD_LOGIC;
	RS : OUT STD_LOGIC;									
	RW : OUT STD_LOGIC;									  
	ENA : OUT STD_LOGIC;		
	OUTLED : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
	OUTLCD : OUT STD_LOGIC_VECTOR(3 DOWNTO 0));
end CPU_STATEMACHINE;

architecture Behavioral of CPU_STATEMACHINE is
	type INSTRUCTION_TYPE is (ADI, BRA, OUTY, FTH);
	signal INSTRUCTION: INSTRUCTION_TYPE :=FTH;
	
	SIGNAL DATA: STD_LOGIC_VECTOR(7 DOWNTO 0);
	
	SIGNAL AC : INTEGER := 0;
	SIGNAL PC : STD_LOGIC_VECTOR(7 DOWNTO 0):="00000000";
	SIGNAL TICK : STD_LOGIC := '0';
	
	SIGNAL VECTOR_MEM_S : STD_LOGIC_VECTOR(11 DOWNTO 0);					 
	SIGNAL DIR : INTEGER RANGE 0 TO 1024:=0;	
	SIGNAL LINE : INTEGER := 1;
	SIGNAL COL : INTEGER := 1;
	SIGNAL RST_VAL : STD_LOGIC := '0';
	SIGNAL LCDVAL : STD_LOGIC_VECTOR(7 DOWNTO 0):="00000000";
	
	TYPE RAM IS ARRAY (0 TO  60) OF STD_LOGIC_VECTOR(11 DOWNTO 0);																	 --
	SIGNAL INST : RAM;
	
	
	COMPONENT ROMAssincrona
	PORT(
		ADDR : IN std_logic_vector(7 downto 0) := "00000000";          
		DATA : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
	
	COMPONENT ContadorModuloM
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;          
		maxTick : OUT std_logic
		);
	END COMPONENT;
	
	COMPONENT PROCESADOR_LCD4BITS
	PORT(
		CLK : IN std_logic;
		VECTOR_MEM : IN std_logic_vector(11 downto 0);
		C1A : IN std_logic_vector(39 downto 0);
		C2A : IN std_logic_vector(39 downto 0);
		C3A : IN std_logic_vector(39 downto 0);
		C4A : IN std_logic_vector(39 downto 0);
		C5A : IN std_logic_vector(39 downto 0);
		C6A : IN std_logic_vector(39 downto 0);
		C7A : IN std_logic_vector(39 downto 0);
		C8A : IN std_logic_vector(39 downto 0);          
		RS : OUT std_logic;
		RW : OUT std_logic;
		ENA : OUT std_logic;
		INC_DIR : OUT INTEGER RANGE 0 TO 1024;
		BD_LCD : OUT std_logic_vector(7 downto 0);
		DATA : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

begin

	Inst_ROMAssincrona: ROMAssincrona PORT MAP(
		ADDR => PC,
		DATA => DATA
	);
	
	Inst_ContadorModuloM: ContadorModuloM PORT MAP(
		clk => CLK,
		reset => '0',
		maxTick => TICK
	);
	
	Inst_PROCESADOR_LCD4BITS: PROCESADOR_LCD4BITS PORT MAP(
		CLK => CLK,
		RS => RS,
		RW => RW,
		ENA => ENA,
		VECTOR_MEM => VECTOR_MEM_S,
		INC_DIR => DIR,
		C1A => (others => '0'),
		C2A => (others => '0'),
		C3A => (others => '0'),
		C4A => (others => '0'),
		C5A => (others => '0'),
		C6A => (others => '0'),
		C7A => (others => '0'),
		C8A => (others => '0'),
		BD_LCD => open,
		DATA => OUTLCD
	);
	 
	
	process(CLK)
	begin
	if (CLK' event and CLK = '1') then
		if (TICK = '1') then
			case INSTRUCTION is
			when FTH =>
				IF(DATA = "00000000") THEN
					INSTRUCTION <= ADI;
				ELSIF (DATA = "00000001") THEN
					INSTRUCTION <= BRA;
				ELSIF (DATA = "00000111") THEN
					INSTRUCTION <= OUTY;
				END IF;
				-- quando já é vector usar só unsigned
				PC <= std_logic_vector(unsigned(PC)+1);
				-- SHIFT LEFT
				--PC <= PC(7 DOWNTO 1)&'0';
				--PC <= PC OR "00000001";
			when ADI =>
				-- ADI
				AC <= AC + to_integer(unsigned(DATA));
				if(AC = 15) then
					AC <= 0;
				end if;
				PC <= std_logic_vector(unsigned(PC)+1);
				INSTRUCTION <= FTH;
			when BRA =>
				-- BRA
				PC <= DATA;
				INSTRUCTION <= FTH;
			when OUTY =>
				-- DATA == "11111111" EXIBIR NOS LEDS
				IF DATA = "11111111" THEN
					OUTLED <= std_logic_vector(to_unsigned(AC,4));
					RST_VAL <= '1';
				-- DATA == "00001111" EXIBIR NO LCD
				ELSIF DATA = "00001111" THEN
					RST_VAL <= '0';
					OUTLED <= "0000";
					if(AC >= 0 AND AC <10) then
						LCDVAL <= std_logic_vector((to_unsigned((AC),8)+48));
						--LCDVAL <= LCDVAL  OR "00110000";
						--LCDVAL <= "00110001";
					else
						LCDVAL <= std_logic_vector(to_unsigned((64+(AC-9)),8));
						--LCDVAL <= LCDVAL  OR "01000000";
					end if;
				-- DATA == "00000000" EXIBIR NO 7SEGMENTOS
				ELSIF DATA = "00000000" THEN
					OUTLED <= "0000";
					RST_VAL <= '1';
				END IF;
				PC <= std_logic_vector(unsigned(PC)+1);
				INSTRUCTION <= FTH;
			end case;
		end if;
	end if;
	end process;
	-- quando não é vector usar o to_unsigned
	
	VECTOR_MEM_S <= INST(DIR);
	-- Commandos

	INST(0) <=  LCD_INI("01");
	INST(1) <=  LOOP_INI(1);
	INST(2) <=  POS(LINE,COL);
	INST(3) <=  CHAR_ASCII(LCDVAL) when RST_VAL = '0' else CLEAR_LCD('1');
	INST(4) <=  LOOP_END(1);
	INST(5) <=  CODIGO_END(1);
	

end Behavioral;
