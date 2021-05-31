/* Program name: random.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Generate Numbers */

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
	int i;
	
	
	srand(time(0));
	for(i=1;i<=10;i++)
	  printf("\n%d",(rand()%100)+1);
	
	
	printf("\n");
}