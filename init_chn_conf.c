#include <stdio.h>
#include <unistd.h>
#include "writePI.h"
#include "init_chn_conf.h"


void init_chn_conf(void)
{
int instruction;
int ins_aen;
int ins_code;
int ins_data;

ins_aen = 0;

//load init_chn_conf[1] lo
ins_code = 6;
ins_data = 300;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load init_chn_conf[2] lo
ins_code = 6;
ins_data = 600;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load init_chn_conf[3] lo
ins_code = 6;
ins_data = 1000;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//load init_chn_conf[1] hi 
ins_code = 7;
ins_data = 300;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load init_chn_conf[2] hi 
ins_code = 7;
ins_data = 600;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load init_chn_conf[3] hi 
ins_code = 7;
ins_data = 1000;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

}


