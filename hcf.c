/* Program name: hcf.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : hcf */

   # include <stdio.h>
   main()
   {
   	int a,b,h;
   	
    printf("Enter two nos...:");
   	scanf("%d%d",&a,&b);
   	
   	h=a<b?a:b;
   	
   	for(;h>=1;h--)
   	  {
  	   	if(a%h==0 && b%h==0)
  	   	   break;
  	   }
   	
   	printf("HCF of %d and %d is %d",a,b,h);
   	
   	
   	printf("\n");
   }

