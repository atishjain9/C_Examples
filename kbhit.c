/* Program name: kbhit.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with kbhit() function */

   # include <stdio.h>
   main()
   {
  	int x;
  	
  	x=kbhit();
  	
  	printf("Value of x is:%d",x);
  	getch();
  	
  	while(!(x=kbhit()))
  	{
	 system("color 4");
	 printf("\tCoding Career Academy....");
	 printf("\tPress Any Key to Stop....");  	
    }
    
    printf("\nValue of x is:%d",x);
    
   	printf("\n");
   }

