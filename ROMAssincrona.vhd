library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity ROMAssincrona is
	PORT(
			ADDR: IN STD_LOGIC_VECTOR(7 DOWNTO 0);
			DATA: OUT STD_LOGIC_VECTOR(7 DOWNTO 0));
end ROMAssincrona;

architecture Behavioral of ROMAssincrona is
	--CONSTANT ADDR_WIDTH: INTEGER:=2;
	CONSTANT DATA_WIDTH: INTEGER:=8;

	TYPE ROM_TYPE IS ARRAY (0 TO 9)
		OF STD_LOGIC_VECTOR(DATA_WIDTH-1 DOWNTO 0);
		
		CONSTANT DATA_ROM: ROM_TYPE:=(
			--ADD
			"00000000",
			"00000001",
			--OUTY 
			---LED
			"00000111",
			"11111111",
			--ADD
			"00000000",
			"00000001",
			--OUTY
			---LCD
			"00000111",
			"00001111",
			--BRA LOOP BACK
			"00000001",
			"00000000"
			);

BEGIN
	DATA <= DATA_ROM(TO_INTEGER(UNSIGNED(ADDR)));

end Behavioral;

