
-- VHDL Instantiation Created from source file ContadorModuloM.vhd -- 12:05:52 11/13/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT ContadorModuloM
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;          
		maxTick : OUT std_logic;
		saida : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_ContadorModuloM: ContadorModuloM PORT MAP(
		clk => ,
		reset => ,
		maxTick => ,
		saida => 
	);


