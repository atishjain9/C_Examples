/* Program name:macroarea.c
   Author: Atish Jain
   Task: Program to work with macros
*/

# include <stdio.h>
# define PI 3.14
main()
{
 int r;
 float a;
 
 printf("Enter Radius...:");
 scanf("%d",&r);
 
 a=PI*r;
 
 printf("Area of Circle is:%f",a);
 printf("\n");
}




