/* Program name: hours.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Program to Convert Total Minutes into Hours and Minutes */
# include <stdio.h>
main()
{
	int tm,h,m;
	tm=h=m=0;
	
	printf("Enter total minutes:");
	scanf("%d",&tm);
	
	h=tm/60;
	m=tm%60;
	
	printf("Time is %d hrs and %d mins..\n",h,m);
}
