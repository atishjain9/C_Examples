/* Program name:macroargs1.c
   Author: Atish Jain
   Task: Program to work with macros with arguments
*/

# include <stdio.h>
# define SUM(a,b) a+b
# define PRODUCT(a,b) a*b
# define PRODUCT(a,b) (a)*(b)
                      
main()
{
 printf("sum of two numbers is:%d",SUM(10,20));
 printf("\nProduct of two numbers is:%d",PRODUCT(5,4));
  printf("\nProduct of two numbers is:%d",PRODUCT(2+3,2+2));
 printf("\n");
}




