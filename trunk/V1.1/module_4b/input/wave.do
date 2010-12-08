onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -format Logic /tb_control_cc/mbrsel_exp
add wave -noupdate -format Logic /tb_control_cc/compare
add wave -noupdate -format Logic /tb_control_cc/mbrsel
add wave -noupdate -format Logic /tb_control_cc/rst
add wave -noupdate -format Logic /tb_control_cc/clk
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {41233421 ps} 0}
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
update
WaveRestoreZoom {40619029 ps} {41598021 ps}
