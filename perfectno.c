/* Program name: perfectno.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : perfect no examples */

   # include <stdio.h>
   main()
   {
   	int no,i=1,sum=0;
   	
   	printf("Enter a no...:");
   	scanf("%d",&no);
   	
   	while(i<no)
   	{
	  if(no%i==0)
	   {
   	    sum=sum+i;
	   }
		
	 i++;	   	
    }
    
    if(sum==no)
      printf("\n%d is Perfect no...",no);
    else
	  printf("\n%d is not Perfect no...",no);  
   	
   	
   	printf("\n");
   }

