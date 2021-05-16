/* Program name: natural100.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print Natural numbers from 1 to 100 using all the loops */
   
   # include <stdio.h>
   main()
   {
    int no=1;
    
    //while loop
    while(no<=100)
    {
    	printf("\t%d",no);
    	no++;
    }
    printf("\nEnd of the while Loop");
    
    printf("\n------------------------------\n");
    
   
    //do while loop
    no=1;
    do
    {
     printf("\t%d",no);
	 no++;	
    }while(no<=100);
    
    printf("\nEnd of the do..while loop");
    
    printf("\n---------------------------------\n");
    
    for(no=1;no<=100;no++)
    {
    	printf("\t%d",no);
    }
    
    printf("\nEnd of For Loop");
    printf("\n");
   }