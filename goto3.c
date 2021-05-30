/* Program name: goto3.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Real Importance of goto */
   
# include <stdio.h>
 main() 
 {
  int i,j,k;
  for(i=1;i<=3;i++)
    {
     for(j=1;j<=3;j++)
      {
       for(k=1;k<=3;k++)
	   {
	   	printf("\n%d - %d - %d",i,j,k);
	    if(i==2 && j==2 && k==2)
	      goto out;
	   }
	   printf("\n---------------------\n");
      }
      printf("\n---------------------\n");
     }
  
    out:
          printf("\nOut of all the loops..");
  
  printf("\n");
 }
