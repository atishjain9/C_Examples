/* Program name: doubleptr.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on double pointer */

# include <stdio.h>
main()
{
 int x=10,*p1,**p2;
 
 p1=&x;
 p2=&p1;
 
 printf("\nvalue at p1 is:%d",*p1);
 printf("\nvalue at p2 is:%d",**p2);
  	

 printf("\n");
}

