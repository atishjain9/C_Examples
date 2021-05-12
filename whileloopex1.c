/* Program name: whileloopex1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print "Hello World" 10 times */
   
   # include <stdio.h>
   main()
   {
   	int c=1;
   	
   	while(c<=10)
   	{
	 printf("\n%d. Hello World",c);
	 c++; //c=c+1;   	
    }
    
    printf("\nEnd of the Loop...%d",c);
   
   	printf("\n");
   }
