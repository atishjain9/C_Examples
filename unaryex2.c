/* Program name: unaryex2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Operators*/

# include <stdio.h>
main()
{
 /*	
 int a=5,b=0;
 
 b=a++;
 printf("a=%d\nb=%d",a,b);
 */
 
 /*	
 int a=5,b=0;
 
 b=++a;
 printf("a=%d\nb=%d",a,b);
 */
 
 int a=10;
 
 printf("\na=%d",a);   //10
 printf("\na=%d",a++); //10
 printf("\na=%d",++a); //12
 printf("\na=%d",a); //12
 printf("\na=%d",a--); //12
 printf("\na=%d",--a); //10
 
 printf("\n");
}
