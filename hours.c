/* Program name: hours.c
  Author: Atish Jain
  IDE: C-Free 5.0
  Task: Program to Convert Total Minutes into Hours and Minutes */

# include <stdio.h>
main()
{
	int tm,h,m;
	printf("Enter Total Minutes...:");
	scanf("%d",&tm);
	h=tm/60;
	m=tm%60;
	printf("Heyy Time is %d hrs and %d mins....",h,m);
	printf("\n");

}