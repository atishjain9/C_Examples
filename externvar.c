/* Program name:externvar.c
   Author: Atish Jain
   Task: demo on exten storage class variables
*/

# include <stdio.h>
# include "extern.c"

extern char name[];
extern char course[];
extern const int duration;
extern const float fees; 
main()
{
 printf("Welcome to %s",name);	
 printf("\nThanks for Enrolling into %s",course);
 printf("\nThe %s course duration is %d hours and fees is %.2f",course,duration,fees);

 printf("\n");
}
