/* Program name:funcchain.c
   Author: Atish Jain
   Task: Working with chain of functions
*/

# include <stdio.h>

main()
{
  printf("\nEntered into main function....");	
  f1();
  printf("\nBack to main Function...");
  printf("\n");
}

f1()
{
	printf("\nEntered into f1....");
	f2();
	printf("\nBack to f1....");
	return;
}

f2()
{
	printf("\nEntered into f2...");
	f3();
	printf("\nBack to f2...");
	return;
}

f3()
{
	printf("\nEntered into f3....");
	printf("\nReturning back to f2 from f3.....");
	return;
}


