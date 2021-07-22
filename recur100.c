/* Program name:recur100.c
   Author: Atish Jain
   Task: Program to Print Natural Numbers till 100 using recursion
*/

# include <stdio.h>

main()
{
 display(1);
 printf("\nEnd of Recursion...");
 printf("\n");
}

display(int x)
{
	if(x>100)
	  return;
    else
    {
    	printf("\t%d",x);
    	display(++x); //recursive function call
    }
}




