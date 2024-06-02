#include "Vpixel_generator.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "iostream"
#include "fstream"
#include "bitset"

int main(int argc, char **argv, char **env)
{
    int i;   // keeps track of number of clock cycle simulations
    int clk; // clock signal

    Verilated::commandArgs(argc, argv);

    Vpixel_generator *top = new Vpixel_generator;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("pixel_generator.vcd");

    std::ofstream outputFile("rgbtop_data.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open file for writing." << std::endl;
        exit(1);
    }

    // initialize simulation inputs
    
    //top->enable = 1;
    top->aresetn = 1;
    //top->Re_lower= 0xFFC00000;
    //top->x_size = 1023;
    //top->y_size = 767;
    //top->Im_upper= 0xFFD00000; // -1.5
    //top->zoom_f = 0x00002000;  //1/256
    // top->a0 = 0;
    // top->b0 = 0;

    // run simulation for many clock cylces
    for (i = 0; i < 25000000; i++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(2 * i + clk);
            top->aclk = !top->aclk;
            top->eval();
        }
        if (i > 2){
            top-> aresetn = 0;
        }
        if (top->RGB_out != 32767){
            std::bitset<15> rgb_binary(top->RGB_out);
            outputFile << rgb_binary << " " << top->X << " " << top->Y << std::endl;
        }

        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()))
        {
            exit(0);
        }
        // ... exit if finish OR 'q' pressed
    }

    tfp->close();
    std::cout << "sim completed" << std::endl;
    exit(0);
}
