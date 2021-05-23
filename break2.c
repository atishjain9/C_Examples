/* Program name: break2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with break keyword */
   
# include <stdio.h>
 main()
 {
  int i,no,sum=0;
  
  for(i=1;i<=10;i++)
  {
  	printf("Enter %d no(0 or -ve to stop):",i);
  	scanf("%d",&no);
  	
  	if(no<=0)
  	{
  	  printf("\nAbnormal Termination of the Program....");	
  	  break;
  	}
  
    sum=sum+no;	  
  }
  
  if(i>=10)
      printf("\nNormal Termination of the Program...");
  
  printf("\nSum of %d nos is:%d",--i,sum);
   
  printf("\n");
 }