#!/bin/bash
echo "Delay Board Testing Software Make"
gcc -Wall -o run run.c ds_fix_conf.c ament_conf.c init_chn_conf.c writePI.c -lwiringPi 
./run

