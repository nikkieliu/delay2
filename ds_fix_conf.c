#include <stdio.h>
#include <unistd.h>
#include "writePI.h"
#include "ds_fix_conf.h"


void ds_fix_conf(void)
{
int instruction;
int ins_aen;
int ins_code;
int ins_data;

ins_aen = 0;

//load u401 Fix ds_fix_conf
ins_code = 10;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load u402 Fix ds_fix_conf
ins_code = 11;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//load u408 Fix ds_fix_conf
ins_code = 12;
ins_data = 0; 
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

}


