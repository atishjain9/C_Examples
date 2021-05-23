/* Program name: nestedloops.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with nested loops */
   
   # include <stdio.h>
   main()
   {
  	int i,j;
  	
  	for(i=1;i<=3;i++) //outer loop
  	{
  		for(j=1;j<=3;j++) //inner loop
  		{
		  printf("\n%d - %d",i,j);  	
        }
        
        printf("\n------------------\n");
	}
   	
      printf("\n");
   }