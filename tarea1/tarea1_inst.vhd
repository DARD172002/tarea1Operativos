	component tarea1 is
		port (
			clk_clk : in std_logic := 'X'  -- clk
		);
	end component tarea1;

	u0 : component tarea1
		port map (
			clk_clk => CONNECTED_TO_clk_clk  -- clk.clk
		);

