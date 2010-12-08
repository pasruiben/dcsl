onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -format Logic /tb_memctrl/u1/readyfch
add wave -noupdate -format Logic /tb_memctrl/u1/readydpt
add wave -noupdate -format Logic /tb_memctrl/u1/readyio
add wave -noupdate -format Logic /tb_memctrl/u1/rqfch
add wave -noupdate -format Logic /tb_memctrl/u1/rqdpt
add wave -noupdate -format Logic /tb_memctrl/u1/rqio
add wave -noupdate -format Logic /tb_memctrl/u1/rst
add wave -noupdate -format Logic /tb_memctrl/u1/clk
add wave -noupdate -format Logic /tb_memctrl/u1/rddpt
add wave -noupdate -format Logic /tb_memctrl/u1/wrdpt
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/addrdpt
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/indpt
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/outdpt
add wave -noupdate -format Logic /tb_memctrl/u1/rdfch
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/addrfch
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/infch
add wave -noupdate -format Logic /tb_memctrl/u1/rdio
add wave -noupdate -format Logic /tb_memctrl/u1/wrio
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/addrio
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/inio
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/outio
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/addr
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/datain
add wave -noupdate -format Literal -radix unsigned /tb_memctrl/u1/dataout
add wave -noupdate -format Logic /tb_memctrl/u1/memrd
add wave -noupdate -format Logic /tb_memctrl/u1/memwr
add wave -noupdate -format Logic /tb_memctrl/u1/memready
add wave -noupdate -format Literal /tb_memctrl/u1/currentstate
add wave -noupdate -format Literal /tb_memctrl/u1/nextstate
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ps} 0}
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
WaveRestoreZoom {0 ps} {112917 ps}
