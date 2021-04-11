/* Program name:typecast2.c
   Author: Atish Jain
   Task: example on typecasting
*/

# include <stdio.h>
main()
{
 int a=5,b=2;
 float c=0;
 
 c=a/(float)b;  //explicit typecasting
 printf("c=%f",c);
 printf("\n");
}