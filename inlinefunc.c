/* Program name:inlinefunc.c
   Author: Atish Jain
   Task: Example on inline functions
*/

# include <stdio.h>

inline int sum(int x,int y)
{
	return(x+y);
}
main()
{
  printf("Sum of two numbers 10 and 20 is:%d",sum(10,20));
  printf("\n");
}
