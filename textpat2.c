/* Program name: textpat2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Patterns using Alphabets   */

# include <stdio.h>
main()
{
 int i,j,tar;
 char ch='A';
 
 printf("Enter How Many Rows You Want to Print(Max-26):");
 scanf("%d",&tar);
 
 if(!(tar>=1 && tar<=26))
 {
 	printf("Invalid input....");
 	exit(0);
 }
 
 for(i=1;i<=tar;i++)
 {
 	ch='A';
 	for(j=1;j<=i;j++)
 	{
	 	printf("%c ",ch++);
	 }
	printf("\n");
 }	
 printf("\n");
}

