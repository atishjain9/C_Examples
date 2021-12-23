/* Program name: bitfields.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Bit Fields */
   
# include <stdio.h>
main()
{
	struct date
	{
		unsigned int dd:5;
		unsigned int mm:4;
		unsigned int yy;
	}doj;
	
	doj.dd=31;
	doj.mm=12;
	doj.yy=2021;
	
	printf("Date of Join:%d/%d/%d",doj.dd,doj.mm,doj.yy);
	printf("\nsize of doj is:%d",sizeof(doj));
	
  
  	printf("\n");
}
