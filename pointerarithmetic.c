/* Program name: pointerarithmetic.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Pointer Arithmetic*/

# include <stdio.h>
main()
{
 int x=10,y=20;
 int *p,*q;
 
 p=&x;
 q=&y;
 
 printf("value of p is:%u",p);
 printf("\nvalue of q is:%u",q);
 
 printf("\nValues in between p & q:%d",p-q);
 
 printf("\nIncrementing p address..:%u",p+1);
 printf("\nIncrementing q address..:%u",q+3);

 printf("\nIncrementing p address..:%u",++p);
 printf("\nDecrementing q address..:%u",--q);
 
  	
 printf("\n");
}
