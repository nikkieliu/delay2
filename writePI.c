#include <stdio.h>
#include <unistd.h>
#include <wiringPi.h>
#include "writePI.h"
void writePI(int n)
{
int i=0;
wiringPiSetup();
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(21,OUTPUT);
pinMode(22,OUTPUT);
pinMode(26,OUTPUT);
pinMode(23,OUTPUT);
pinMode(24,OUTPUT);
pinMode(27,OUTPUT);
pinMode(25,OUTPUT);
pinMode(28,OUTPUT);
pinMode(29,OUTPUT);

printf("\ninstruction: %d\n",n);
 while(n)
 {
 if(n&1)
 {
//  printf("1");
 // printf("-i:%d\n",i);
  if(i==0) {digitalWrite(0,HIGH);}
  if(i==1) {digitalWrite(1,HIGH);}
  if(i==2) {digitalWrite(2,HIGH);}
  if(i==3) {digitalWrite(3,HIGH);}
  if(i==4) {digitalWrite(4,HIGH);}
  if(i==5) {digitalWrite(5,HIGH);}
  if(i==6) {digitalWrite(6,HIGH);}
  if(i==7) {digitalWrite(21,HIGH);}
  if(i==8) {digitalWrite(22,HIGH);}
  if(i==9) {digitalWrite(26,HIGH);}
  if(i==10){digitalWrite(23,HIGH);}
  if(i==11){digitalWrite(24,HIGH);}
  if(i==12){digitalWrite(27,HIGH);}
  if(i==13){digitalWrite(25,HIGH);}
  if(i==14){digitalWrite(28,HIGH);}
  if(i==15){digitalWrite(29,HIGH);}
 }
 else 
{
  //printf("0\n");
  if(i==0) {digitalWrite(0,LOW);}
  if(i==1) {digitalWrite(1,LOW);}
  if(i==2) {digitalWrite(2,LOW);}
  if(i==3) {digitalWrite(3,LOW);}
  if(i==4) {digitalWrite(4,LOW);}
  if(i==5) {digitalWrite(5,LOW);}
  if(i==6) {digitalWrite(6,LOW);}
  if(i==7) {digitalWrite(21,LOW);}
  if(i==8) {digitalWrite(22,LOW);}
  if(i==9) {digitalWrite(26,LOW);}
  if(i==10){digitalWrite(23,LOW);}
  if(i==11){digitalWrite(24,LOW);}
  if(i==12){digitalWrite(27,LOW);}
  if(i==13){digitalWrite(25,LOW);}
  if(i==14){digitalWrite(28,LOW);}
  if(i==15){digitalWrite(29,LOW);}
}
 n>>=1;
i=i+1;
 }
//printf("\n");
  usleep(100);
  digitalWrite(29,LOW);
  usleep(100);
  digitalWrite(28,LOW);
}


