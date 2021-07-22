/* Program name:funcdecldemo4.c
   Author: Atish Jain
   Task: when the function is returning non-int value and defined above the main
*/

# include <stdio.h>

char display() //function definition
{
  return('A');
}

main()
{
 
 printf("The Character is:%c",display()); //function call
 printf("\n");
}


