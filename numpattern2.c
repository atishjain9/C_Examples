/* Program name: numpattern2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Patterns using Numbers   */

# include <stdio.h>
main()
{
 int i,j,no;
 
 printf("Enter How Many Rows....:");
 scanf("%d",&no);
 
 for(i=1;i<=no;i++)
 {
 	for(j=1;j<=i;j++)
 	{
	 	printf("%d ",i);
	 }
	 printf("\n");
 }
  printf("\n");
}


