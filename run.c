#include <stdio.h>
#include <unistd.h>
#include "writePI.h"
#include "ds_fix_conf.h"
#include "ament_conf.h"
#include "init_chn_conf.h"

int main(void)
{
int instruction;
int ins_aen;
int ins_code;
int ins_data;

ins_aen = 0;

//stop to prepare configuration
ins_code = 1;
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//ds_fix_conf();
//ament_conf();
init_chn_conf();

//load total chn cnt 
ins_code = 5;
ins_data = 4;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//load frequency setting 
ins_code = 4;
ins_data = 500;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//load step counter 
ins_code = 13;
ins_data = 1023;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//load step increament 
ins_code = 14;
ins_data = 10;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//reload
ins_code = 15;
ins_data = 1;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);
//reload relase
ins_data = 0;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

//start to run 
ins_code = 1;
ins_data = 1;
instruction = (1<<15) + (ins_aen << 14) + (ins_code << 10) + (ins_data);
writePI(instruction);

printf("\ndone!\n");


return 0;
}


