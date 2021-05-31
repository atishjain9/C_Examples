/* Program name: randomrange.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Generate 10 Random numbers in the given range 25 & 50 */

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
main()
{
	int i;
	
	
	srand(time(0));
	for(i=1;i<=10;i++)
	  printf("\n%d",(rand()%25)+25);
	
	
	printf("\n");
}