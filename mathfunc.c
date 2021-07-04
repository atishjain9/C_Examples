/* Program name:mathfunc.c
   Author: Atish Jain
   Task: Working with Mathematical functions
*/

# include <stdio.h>
main()
{
 int no=625;
 int a=-12;
 int b,p;
 b=2;
 p=3;
 float x=12.50;
 
 printf("\nSquare root of %d is %.2lf",no,sqrt(no));
 printf("\nAbsolute Value of %d is %d",a,abs(a));
 printf("\n%d Power of %d is %lf",b,p,pow(b,p));
 printf("\nCeil of %f is %lf",x,ceil(x));
 printf("\nFloor of %f is %lf",x,floor(x));
 
 
 	
 printf("\n");	
}