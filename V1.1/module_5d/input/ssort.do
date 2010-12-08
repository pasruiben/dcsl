vsim -c -quiet work.tb_system

bp control.vhd 349
onbreak {resume}
mem save -dataradix decimal -startaddress 3000 -endaddress 3016 -wordsperline 1 /tb_system/uut/mem1/ram -outfile program7_unsorted.txt
set NumericStdNoWarnings 1
run -all
mem save -dataradix decimal -startaddress 3000 -endaddress 3016 -wordsperline 1 /tb_system/uut/mem1/ram -outfile program7_sorted.txt

#quit -sim
#quit