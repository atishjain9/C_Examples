/* Program name: evenodd.c
   Author: Atish Jain
   Task: Program to check whether the inputted no is even or odd.
*/

# include <stdio.h>
main()
{
 int no;
 
 printf("Enter a no....:");
 scanf("%d",&no);
 
 if(no%2==0)
   printf("%d is Even....",no);
 else
   printf("%d is Odd...",no);
	
 printf("\n");
}