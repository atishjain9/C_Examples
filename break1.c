/* Program name: break1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with break keyword */
   
# include <stdio.h>
 main()
 {
  int no;
  
  for(no=1;no<=10;no++)
  {
  	  	
  	if(no%5==0)
  	  break;
  	
	printf("\n%d",no);
    
  }	
  printf("\nOut of the Loop...");
   
  printf("\n");
 }