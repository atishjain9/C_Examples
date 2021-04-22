/* Program name:stuavg.c
   Author: Atish Jain
   Task: Program to Print class of a student based on avg marks.
*/

# include <stdio.h>
main()
{
 float avg=0;
 
 printf("Enter ur Average Marks...:");
 scanf("%f",&avg);
 
 
 if(avg>=60)
    printf("First Class...");
 else
     if(avg>=50)
	    printf("Second class....");
	 else
	     if(avg>=40)
		    printf("Third class...");
		 else
		     printf("Failed....");	   
	
 printf("\n");
}