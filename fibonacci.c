/* Program name: fibonacci.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print Fibonacci series till 100 */

   # include <stdio.h>
   main()
   {
  	int a,b,c;
  	a=-1;
  	b=1;
    c=0;
  	
  	while(c<=100)
  	{
	  	c=a+b;
	  	
	    if(c<100)
	  	   printf("\t%d",c);
	  	   
	  	a=b;
	  	b=c;
    }
   	printf("\n");
   }

