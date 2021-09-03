/* Program name: add2pointersdemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : example on adding of two numbers using pointers */

# include <stdio.h>
main()
{
 int a,b,c;
 int *p1,*p2;
 
 printf("Enter first no..:");
 scanf("%d",&a);
 
 printf("Enter second no..:");
 scanf("%d",&b);
 
 p1=&a;
 p2=&b;
 
 c=*p1+*p2;
 
 printf("\nResult is:%d",c);
  
 printf("\n");
}
