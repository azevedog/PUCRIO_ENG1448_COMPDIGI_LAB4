library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

entity ContadorModuloM is
	generic(
				N: integer := 27;
				M: integer := 50000000);
				--N: integer := 5;
				--M: integer := 10);
	Port (
				clk,reset : in std_logic;
				maxTick : out std_logic
				);
end ContadorModuloM;

architecture Behavioral of ContadorModuloM is
	signal aux : unsigned (N-1 downto 0) := (others => '0');
begin

	process (clk, reset)
		begin
			if(reset = '1') then
				aux <= (others => '0');
			elsif (clk' event and clk = '1') then
				aux <= aux +1;
				if (aux = M) then
					aux <= (others => '0');
				end if;
			end if;
			
	end process;
	maxTick <= '1' when aux = M else '0';

end Behavioral;

