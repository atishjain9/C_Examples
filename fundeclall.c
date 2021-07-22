/* Program name:funcdeclall.c
   Author: Atish Jain
   Task: understanding when func decl is optional and when it is compulsary
*/

# include <stdio.h>

//func def for model 4
float display4()
{
	return 25.50;
}
main()
{
 float display3(); //func declaration	
	
 //model 1	- func callinig
 display1();
 
 //model 2
 printf("\n%d",display2()); // fun calling
 
 //model 3
 printf("\n%f",display3()); //fun calling

 //model 4
 printf("\n%f",display4()); //fun calling
 
 printf("\n");
}

//func def for model 1

display1()
{
	putchar('A');
}

//func def for model 2

int display2()
{
  return 12;	
}

//func def for model 3

float display3()
{
	return 12.50;
}