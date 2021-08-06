/* Program name: conditionalcompilation4.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work with Conditional Compilation*/

#include <stdio.h>

#define RESULT(a,b) a##b+a*b
                    
main()
{
 printf("Result of the Macro is:%d",RESULT(2,3));
 
 #undef RESULT
 //printf("Result of the Macro is:%d",RESULT(2,3));
 
 printf("\n");
}
