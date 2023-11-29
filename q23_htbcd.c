// Q23. Write a function which accepts a two digit hexadecimal number (<0x64H) and returns the decimal equivalent represented in the form of a packed 2 digit BCD number.

// Now, Interface two 7 segment common anode LED displays to Port 1 and Port 2 on 8051. Write a program in Embedded C for 8051 microcontroller to display a blank initially and then increment the display by 1 after every 500 ms. After 99, the count should roll back to 00 and continue.

#include<reg52.h>
void delay();
unsigned char hextobcd(unsigned char count);
void display(unsigned char packed);

unsigned char codes[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};




void main(){
unsigned char packed,count;
count = 0x00;
again: packed = hextobcd(count);
display(packed);
delay();
count++;

if (count == 0x64){
	count = 0x00;}

goto again;
}

unsigned char hextobcd(unsigned char count){
unsigned char bcd,quo,rem;
quo = count/10;
rem = count%10;
quo = quo<<4;
bcd = quo|rem;
return bcd;
}

void delay(){
unsigned int i;
TMOD=0x02;
TH0=TL0=0x06;
TR0=1;
for(i=0;i<2000*10;i++){
	while(TF0==0);
	TF0=0; }
}

void display(unsigned char packed){
	unsigned char *p;
	unsigned char num1,num0;
	num0=packed & 0x0F;   //Ones digit.
	num1=packed & 0xF0;
	num1=num1>>4;		//Tens digit

	p=&codes;
	p=p+num0;
	P0= *p;
	p=&codes;
	p=p+num1;
	P1= *p;
}
  