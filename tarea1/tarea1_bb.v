
module tarea1 (
	botones_external_export,
	buzzer_external_export,
	clk_clk,
	led_external_export,
	seg0_external_export,
	seg1_external_export,
	seg2_external_export,
	seg3_external_export,
	seg4_external_export,
	seg5_external_export,
	swtich_external_export);	

	input	[3:0]	botones_external_export;
	output		buzzer_external_export;
	input		clk_clk;
	output	[2:0]	led_external_export;
	output	[6:0]	seg0_external_export;
	output	[6:0]	seg1_external_export;
	output	[6:0]	seg2_external_export;
	output	[6:0]	seg3_external_export;
	output	[6:0]	seg4_external_export;
	output	[6:0]	seg5_external_export;
	input	[3:0]	swtich_external_export;
endmodule
