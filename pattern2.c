/* Program name: Pattern2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Patterns using Starts and Numbers */

# include <stdio.h>
main()
{
 int i,j,r;
 
 printf("Enter How Many Rows...:");
 scanf("%d",&r);
 
 for(i=1;i<=r;i++)
 {
 	for(j=1;j<=r;j++)
 	{
	 	if(j>=i)
	 	  printf(" * ");
	 	else
		  printf("   ");  
	 }
	 printf("\n");
 }

 printf("\n");
}


