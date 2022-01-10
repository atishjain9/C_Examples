/* Program name: getwputw.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to numeric data and read numeric data from a file */

#include <stdio.h>  
main()  
{
	FILE *ptr;
	int a,b,c,no=0;
	a=10;
	b=20;
	c=a+b;
	
	ptr=fopen("numbers.dat","w");
	
	putw(a,ptr);
	putw(b,ptr);
	putw(c,ptr);
	
	fclose(ptr);
	printf("Numeric data is writeen to the file....");
	
	ptr=fopen("numbers.dat","r");
	
	if(ptr==NULL)
	{
		printf("\nNo File exists...");
		exit(0);
	}
	
	printf("\nReading numeric data from the file...");
	printf("\n-------------------------------------");
	while(1)
	{
		no=getw(ptr);
		if(no!=EOF)
		  printf("\n%d",no);
		else
		  break;  
	}
	
	printf("\nData is Displayed from  the file...");
	fclose(ptr);
	
 printf("\n");    
}  