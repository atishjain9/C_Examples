/* Program name: big10.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to find Biggest of 10 numbers */

   # include <stdio.h>
   main()
   {
  	int count,no,big=0;
  	
  	for(count=1;count<=10;count++)
  	{
	  	printf("Enter %d no...:",count);
	  	scanf("%d",&no);
	  	
	  	if(no>big)
	  	  big=no;
   }
   
   printf("\nBiggest no is:%d",big);
   
   	printf("\n");
   }

