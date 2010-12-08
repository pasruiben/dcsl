onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -format Logic /tb_fetch/ufetch/rst
add wave -noupdate -format Logic /tb_fetch/ufetch/clk
add wave -noupdate -format Logic /tb_fetch/ufetch/readinstr
add wave -noupdate -format Literal -radix hexadecimal /tb_fetch/ufetch/memdata
add wave -noupdate -format Logic /tb_fetch/ufetch/vldinstr
add wave -noupdate -format Logic /tb_fetch/ufetch/pcinc
add wave -noupdate -format Logic /tb_fetch/ufetch/memrd
add wave -noupdate -format Logic /tb_fetch/ufetch/memready
add wave -noupdate -format Literal /tb_fetch/ufetch/ir
add wave -noupdate -format Literal /tb_fetch/ufetch/currentstate
add wave -noupdate -format Logic /tb_fetch/ufetch/ir_ien
add wave -noupdate -divider control
add wave -noupdate -format Literal /tb_fetch/ucontrol/currentstate
add wave -noupdate -format Literal /tb_fetch/ucontrol/opcode_debug
add wave -noupdate -format Literal /tb_fetch/ucontrol/opcode_nr
add wave -noupdate -divider tb
add wave -noupdate -format Literal -radix hexadecimal /tb_fetch/ir1
add wave -noupdate -format Literal -radix hexadecimal /tb_fetch/ir2
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {161980 ps} 0}
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
WaveRestoreZoom {0 ps} {1092 ns}
