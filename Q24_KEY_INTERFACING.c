//Keyboard key interfacing.

#include<reg52.h>
//output port
sbit R1 = P2^0;
sbit R2 = P2^1;
sbit R3 = P2^2;

//input port
sbit C1 = P2^3;
sbit C2 = P2^4;
sbit C3 = P2^5;


xdata unsigned char codes[10]= {0xFF,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void isr_int0() interrupt0{
unsigned char *p=&codes[0];

R1=0; R2=1; R3=1;
if (C1==0 && C2==1 && C3==1)
key=1;
goto here;
else if (C1==1 && C2==0 && C3==1)
key=2;
goto here;
else if (C1==1 && C2==1 && C3==0)
key=3;
goto here;

R1=1; R2=0; R3=1;
if (C1==0 && C2==1 && C3==1)
key=4;
goto here;
else if (C1==1 && C2==0 && C3==1)
key=5;
goto here;
else if (C1==1 && C2==1 && C3==0)
key=6;
goto here;

R1=1; R2=1; R3=0;
if (C1==0 && C2==1 && C3==1)
key=7;
goto here;
else if (C1==1 && C2==0 && C3==1)
key=8;
goto here;
else if (C1==1 && C2==1 && C3==0)
key=9;
goto here;

here:p=p+key;
P1=*p;
p=&codes[0]
}

void main;
{ 
	P1=0x00;
	P1= codes[0];
  	SP=0x07;
	C1=C2=C3=1;
	R1=R2=R3=0;
	
	IE=0x81;
	TCON=0x01;
	here: goto here;
}
