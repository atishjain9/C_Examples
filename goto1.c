/* Program name: goto1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work goto keyword */
   
# include <stdio.h>
# include <math.h>

main()
 {
  int no;
  
  start:
  printf("Enter a Positive no..:");
  scanf("%d",&no);
  
  if(no<=0)
  {
  	printf("Please Input Positive Numbers Greater than 0 only....\n");
    goto start;
  }
  
  printf("Square root of %d is %lf",no,sqrt(no));
   	   
   printf("\n");
 }