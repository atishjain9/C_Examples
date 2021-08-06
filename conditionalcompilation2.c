/* Program name: conditionalcompilation2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work with Conditional Compilation*/

#include <stdio.h>
# define RATE 15
main()
{
 int p=10000,t=1;
 #if RATE == 10
     printf("Interest for 10,000 at 10%% Per Annum is :%d",(p*t*RATE)/100);
 #elif RATE == 12
     printf("Interest for 10,000 at 12%% Per Annum is :%d",(p*t*RATE)/100);
 #elif RATE == 15
     printf("Interest for 10,000 at 15%% Per Annum is :%d",(p*t*RATE)/100);
#elif RATE == 18
     printf("Interest for 10,000 at 18%% Per Annum is :%d",(p*t*RATE)/100);
#else
	#error "Please Provide the Value for RATE";
#endif
	     
 printf("\n");
}
