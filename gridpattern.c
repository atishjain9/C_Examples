/* Program name: gridPattern.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Grid Pattern */

# include <stdio.h>
main()
{
 int i,j,n;
 
 printf("Enter How Many Rows....:");
 scanf("%d",&n);
 
 system("color 2");
 for(i=1;i<=n;i++)
 {
 	for(j=1;j<=n;j++)
 	{
	 	printf(" * ");
	 }//end of inner loop
	 
	 printf("\n");
	 
 }

 printf("\n");
}


