/* Program name: lcm.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : lcm */

   # include <stdio.h>
   main()
   {
   	int a,b,l,c=0;
   	
   	printf("Enter Two Numbers...:");
   	scanf("%d%d",&a,&b);
   	
   	for(l=a>b?a:b;l<=(a*b);l=l+(a>b?a:b))
   	{
   		c++;
	   	if(l%a==0 && l%b==0)
	   	  break;
    }
    
    printf("\nNo of Iterations are:%d",c);
    printf("\nLCM of %d and %d is %d",a,b,l);
   	
   	printf("\n");
   }

