/* Program name: oddnos.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print Odd numbers from 1 to N using any of the loop */
   
   # include <stdio.h>
   main()
   {
 	 int tar=0,no=1,count=0;
 	 
 	 printf("Enter ur Target No....:");
 	 scanf("%d",&tar);
 	 
 	 while(no<=tar)
 	 {
 	 	printf("\t%d",no);
 	 	no+=2;
 	 	
 	  count++;//count no if iterations
 	 }
 	 
 	 printf("\nNo of Iterations are:%d",count);
 	 printf("\nEnd of the Loop....");
  
     printf("\n");
   }