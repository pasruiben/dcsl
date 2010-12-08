
cd D:/Lab4_microprocessor/Engels/V1.1/module_6a/simulation
vmap  xilinxcorelib D:/compxlib6.1c_X8.2/XilinxCoreLib
vmap  simprim       D:/compxlib6.1c_X8.2/simprim
vmap  unisim        D:/compxlib6.1c_X8.2/unisim


vlib work
vcom ../coregen/micro6_ram.vhd

vcom ../input_cd/micro_pk.vhd
vcom ../input_cd/micro_comp_pk.vhd
vcom ../input_cd/micro_control_pk.vhd
vcom ../input_cd/alu.vhd
vcom ../input_cd/stack.vhd
vcom ../input_cd/control.vhd
vcom ../input_cd/counter_updown.vhd
vcom ../input_cd/counter.vhd
vcom ../input_cd/cpu.vhd
vcom ../input_cd/dcm_1.vhd
vcom ../input_cd/fetch.vhd
vcom ../input_cd/main_mem.vhd
vcom ../input_cd/memCtrl.vhd
vcom ../input_cd/miniUART.vhd
vcom ../input_cd/mux2xbus.vhd
vcom ../input_cd/mux4xbus.vhd
vcom ../input_cd/regfile.vhd
vcom ../input_cd/register_en.vhd
vcom ../input_cd/RxUnit.vhd
vcom ../input_cd/baud.vhd
vcom ../input_cd/TxUnit.vhd
vcom ../input_cd/IO2Uart.vhd
vcom ../input_cd/system.vhd

vcom fake_uart/uart_fake.vhd

vcom TB_system.vhd
