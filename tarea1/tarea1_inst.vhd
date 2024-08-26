	component tarea1 is
		port (
			botones_external_export : in  std_logic_vector(3 downto 0) := (others => 'X'); -- export
			buzzer_external_export  : out std_logic;                                       -- export
			clk_clk                 : in  std_logic                    := 'X';             -- clk
			led_external_export     : out std_logic_vector(2 downto 0);                    -- export
			seg0_external_export    : out std_logic_vector(6 downto 0);                    -- export
			seg1_external_export    : out std_logic_vector(6 downto 0);                    -- export
			seg2_external_export    : out std_logic_vector(6 downto 0);                    -- export
			seg3_external_export    : out std_logic_vector(6 downto 0);                    -- export
			seg4_external_export    : out std_logic_vector(6 downto 0);                    -- export
			seg5_external_export    : out std_logic_vector(6 downto 0);                    -- export
			swtich_external_export  : in  std_logic_vector(3 downto 0) := (others => 'X')  -- export
		);
	end component tarea1;

	u0 : component tarea1
		port map (
			botones_external_export => CONNECTED_TO_botones_external_export, -- botones_external.export
			buzzer_external_export  => CONNECTED_TO_buzzer_external_export,  --  buzzer_external.export
			clk_clk                 => CONNECTED_TO_clk_clk,                 --              clk.clk
			led_external_export     => CONNECTED_TO_led_external_export,     --     led_external.export
			seg0_external_export    => CONNECTED_TO_seg0_external_export,    --    seg0_external.export
			seg1_external_export    => CONNECTED_TO_seg1_external_export,    --    seg1_external.export
			seg2_external_export    => CONNECTED_TO_seg2_external_export,    --    seg2_external.export
			seg3_external_export    => CONNECTED_TO_seg3_external_export,    --    seg3_external.export
			seg4_external_export    => CONNECTED_TO_seg4_external_export,    --    seg4_external.export
			seg5_external_export    => CONNECTED_TO_seg5_external_export,    --    seg5_external.export
			swtich_external_export  => CONNECTED_TO_swtich_external_export   --  swtich_external.export
		);

