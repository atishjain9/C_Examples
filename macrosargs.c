/* Program name:macroargs.c
   Author: Atish Jain
   Task: Program to work with macros with arguments
*/

# include <stdio.h>
# define MAX(a,b) a>b ? a : b
main()
{
 int a=3,b=5;
 
 printf("Maximum of %d and %d is....:%d",a,b,MAX(a,b));
 printf("\n");
}




