/* Program name: sumofdigits.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to find sum of digits from the inputted no */
   
   # include <stdio.h>
   main()
   {
  	int no,r,sum;
  	no=r=sum=0;
  	
  	printf("Enter a no....:");
  	scanf("%d",&no);
  	
  	while(no>0)
  	{
     r=no%10; 
	 sum=sum+r; 
     no=no/10; 
    }
    
    printf("Sum of Digits is:%d",sum);
       printf("\n");
   }