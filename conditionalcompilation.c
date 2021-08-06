/* Program name: conditionalcompilation.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work with Conditional Compilation*/

#include <stdio.h>

main()
{
 #ifdef __WIN32
   printf("Windows....");
 #elif __APPLE
   printf("Mac OS");
 #elif __linux
   printf("Unix/Linux OS....");
 #endif
	
 printf("\n");
}
