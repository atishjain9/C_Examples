/* Program name: bitfieldstime.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Bit Fields */
   
# include <stdio.h>
main()
{
	struct time
	{
		unsigned int hh:10;
		unsigned int mm:10;
		unsigned int ss:12;
	}time;
	
	time.hh=12;
	time.mm=60;
	time.ss=60;
	
	printf("Time is:%d/%d/%d",time.hh,time.mm,time.ss);
	printf("\nsize of time is:%d",sizeof(time));
	
  
  	printf("\n");
}
