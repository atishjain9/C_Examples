/* Program name: funcptrdemo1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Function Pointers Demo */

#include <stdio.h>
main()
{
 void display();
 
 void (*ptr)();
 
 ptr=display;
 
 ptr(); //function call using function pointer
 
 printf("\n"); 
}

void display()
{
	printf("Function Pointers Demo....");
}


