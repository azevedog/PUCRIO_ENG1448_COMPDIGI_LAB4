
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity RAMSincrona is
	GENERIC(
		ADDR_WIDTH: INTEGER:= 12;
		DATA_WIDTH: INTEGER:= 8
		);
		PORT ( CLK: IN STD_LOGIC;
				  WE: IN STD_LOGIC;
				  ADDR: IN STD_LOGIC_VECTOR(ADDR_WIDTH-1 DOWNTO 0);
				  DIN: IN STD_LOGIC_VECTOR(DATA_WIDTH-1 DOWNTO 0);
				  DOUT: OUT STD_LOGIC_VECTOR(DATA_WIDTH-1 DOWNTO 0));
end RAMSincrona;

architecture Behavioral of RAMSincrona is
	TYPE RAM_TYPE IS ARRAY (2**ADDR_WIDTH-1 DOWNTO 0)
		OF STD_LOGIC_VECTOR (DATA_WIDTH-1 DOWNTO 0);
	SIGNAL RAM : RAM_TYPE;
		SIGNAL ADDR_REG : STD_LOGIC_VECTOR (ADDR_WIDTH-1 DOWNTO 0);

begin
	PROCESS(CLK)
	BEGIN
		IF(CLK'EVENT AND CLK = '1') THEN
			IF(WE = '1') THEN
				RAM(TO_INTEGER(UNSIGNED(ADDR))) <= DIN;
			END IF;
			ADDR_REG <= ADDR;
		END IF;
	END PROCESS;
	DOUT <= RAM(TO_INTEGER(UNSIGNED(ADDR_REG)));
end Behavioral;
