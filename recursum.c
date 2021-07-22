/* Program name:recursum.c
   Author: Atish Jain
   Task: Program to print sum of N Numbers Using Recursion
*/

# include <stdio.h>

main()
{
 int n,res;
 printf("Enter value for n:");
 scanf("%d",&n);
 
 res=sum(n);
 printf("\nSum of %d numbers is %d...",n,res);
 printf("\n");
}

int sum(int n)
{
	if(n!=0)
	  return n+sum(n-1);
	else
	  return n;  
}

