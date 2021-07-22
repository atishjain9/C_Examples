/* Program name:funcdecldemo3.c
   Author: Atish Jain
   Task: when the function is returning non-int value
*/

# include <stdio.h>

main()
{
 char display(); //function declaraiton
 
 printf("The Character is:%c",display()); //function call
 printf("\n");
}


char display() //function definition
{
  return('A');
}
