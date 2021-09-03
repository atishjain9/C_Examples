/* Program name: pointersdemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : example on pointers */

# include <stdio.h>
main()
{
 int x=10; //ordinary variable declaration
 int *p; //pointer variable declaration
 
 p=&x;
 
 printf("\nvalue of x is:%d",x);
 printf("\nAddress of x is:%u",&x);
 printf("\nValue of p is:%u",p);
 printf("\nValut at Address of p is:%d",*p);
 
  printf("\n");
}
