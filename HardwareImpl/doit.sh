#!/bin/sh
#cleanup
rm -rf obj-dir
rm -f pixel_generator.vcd

#run Verilator to translate Verilog into c++,including c++ testbench
verilator -Wall --cc --trace pixel_generator.v --exe tb.cpp

#build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f pixel_generator.mk pixel_generator

# run executable simulation file
obj_dir/Vmandelbrot_toplevel