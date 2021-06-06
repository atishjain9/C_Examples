/* Program name: pyramid.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Pyramid Pattern */

# include <stdio.h>
main()
{
 int i,j,n;
 
 printf("Enter Number of Rows....:");
 scanf("%d",&n);
 
 
 for(i=1;i<=n;i++)
 {
 	for(j=1;j<=(n*2-1);j++)
 	{
	 	if( j>=n-(i-1) && j<=n+(i-1) )
	 	  printf("*");
	 	else
		  printf(" ");  
	 }//end of inner loop
	 printf("\n");
 }//end of outer loop
	
}