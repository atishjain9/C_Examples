/* Program name: conditionalcompilation1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work with Conditional Compilation*/

#include <stdio.h>

main()
{
#ifdef _WIN32
   printf("Windows OS");
#elif __APPLE__
   printf("Mac OS");
#elif __LINUX__
   printf("Unix/Linux OS...");
#else
   printf("Unable to Detect the OS");
#endif
         	
 printf("\n");
}
