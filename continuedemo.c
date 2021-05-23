/* Program name: continuedemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with continue keyword */
   
   # include <stdio.h>
   main()
   {
  	int i,no,sum=0;
  	
  	for(i=1;i<=10;i++)
  	{
	  	printf("Enter %d no....:",i);
	  	scanf("%d",&no);
	  	
	  	if(no<=0)
	  	 {
 	  	   continue;	
 	  	 }
 	  	 
 	  	sum=sum+no; 
	  }
	  
	  printf("Sum is:%d",sum);

   printf("\n");
 }