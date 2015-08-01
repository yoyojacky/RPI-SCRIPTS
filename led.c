root@webpi:~# cat led.c
#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc,char* argv[])
{
  if (argc < 2) {
        printf ("Usage example: ./led 4 \n");
return 1;
}

int pinNumber = atoi(argv[1]);

if (-1 == wiringPiSetup()) {
 printf("Setup wiringPi failed!");
return 1;
}
pinMode(pinNumber,OUTPUT);
while(1) {
  digitalWrite(pinNumber,1);
  delay(800);
  digitalWrite(pinNumber,0);
  delay(800);
}
return 0;
}
root@webpi:~#
