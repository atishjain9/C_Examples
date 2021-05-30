/* Program name: fact.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Factorial of Given no */

   # include <stdio.h>
   main()
   {
   	int no,f=1,temp=0;
   	
   	printf("Enter a no...:");
   	scanf("%d",&no);
   	temp=no;
   	
   	if(no<=0)
   	{
	 printf("Factorial of %d is %d",no,f);
	 exit(0); 
    }
   	
   	while(no>=1)
   	{
	 f=f*no;
	 no--;
    }
    
    no=temp;
    
    printf("\nFactorial of %d is %d",no,f);
    
    
    
   	printf("\n");
   }

