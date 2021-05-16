    /* Program name: reverseno.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to find reverse of the given no */
   
   # include <stdio.h>
   main()
   {
  	int no,r,rev;
  	no=r=rev=0;
  	
  	printf("Enter a no...:");
  	scanf("%d",&no);
  	
  	while(no>0)
  	{
  		r=no%10;
  		rev=rev*10+r;
  		no=no/10;
  	}

printf("\nReverse of the inputted no is:%d",rev);   	    

printf("\n");
}