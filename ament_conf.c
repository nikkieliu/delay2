#include <stdio.h>
#include <unistd.h>
#include "writePI.h"
#include "ament_conf.h"


void ament_conf(void)
{
int instruction;
int ins_aen;
int ins_code;
int ins_data;

ins_aen = 0;

//load ament_conf[1] lo
ins_code = 8;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load ament_conf[2] lo
ins_code = 8;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load ament_conf[3] lo
ins_code = 8;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//load ament_conf[1] hi 
ins_code = 9;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load ament_conf[2] hi 
ins_code = 9;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load ament_conf[3] hi 
ins_code = 9;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

}


