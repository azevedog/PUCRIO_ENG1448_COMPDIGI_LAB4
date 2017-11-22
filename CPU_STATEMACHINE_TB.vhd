--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:00:27 11/19/2017
-- Design Name:   
-- Module Name:   C:/Users/gazevedo/Desktop/LAB4/LabCPU/CPU/CPU_STATEMACHINE_TB.vhd
-- Project Name:  CPU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CPU_STATEMACHINE
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY CPU_STATEMACHINE_TB IS
END CPU_STATEMACHINE_TB;
 
ARCHITECTURE behavior OF CPU_STATEMACHINE_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CPU_STATEMACHINE
    PORT(
         CLK : IN  std_logic;
         RS : OUT  std_logic;
         RW : OUT  std_logic;
         ENA : OUT  std_logic;
         OUTLED : OUT  std_logic_vector(7 downto 0);
         OUTLCD : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';

 	--Outputs
   signal RS : std_logic;
   signal RW : std_logic;
   signal ENA : std_logic;
   signal OUTLED : std_logic_vector(7 downto 0);
   signal OUTLCD : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CPU_STATEMACHINE PORT MAP (
          CLK => CLK,
          RS => RS,
          RW => RW,
          ENA => ENA,
          OUTLED => OUTLED,
          OUTLCD => OUTLCD
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      wait;
   end process;

END;
