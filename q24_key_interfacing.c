//Keyboard key interfacing.

#include<reg52.h>
sbit R1 = P2^1;
sbit R2 = P2^2;
sbit R3 = P2^3;
sbit C1 = P2^4;
sbit C2 = P2^5;
sbit C3 = P2^6;

unsigned char sw = 0x00;
unsigned char switch1(void);
void main;
{ 
  while(1)
   { P2 = 0;
     sw = switch1();
	 segment = sw;
	 }
}
 unsigned char switch1(void)
 { 
  if((R1==0)||(R2==0)||(R3==0))
   { R1=R2=R3=1;
     C1=C2=C3=1;
	 C1=0;
	 if (R1==0) return(0x9F);
	 if (R2==0) return(0x99);
	 if (R3==0) return(0x1F);
	 C1=1;
	 C2=0;
	 if (R1==0) return(0x28);
	 if (R2==0) return(0x49);
	 if (R3==0) return(0x00);
	 C2=1;
	 C3=0;
	 if (R1==0) return(0x0D);
	 if (R2==0) return(0x40);
	 if (R3==0) return(0x1B);
	 C3=1;
   }
   else return(0xFF);

   }



