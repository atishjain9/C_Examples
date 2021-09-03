/* Program name: funcptr3.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : functions returning pointer */

#include <stdio.h>

int *calcbonus(int);

main()
{
 int salary,*bonus;
 salary=50000;
 
 bonus=calcbonus(salary);
 
 printf("Bonus is:%d",*bonus);

 printf("\n");
}

int* calcbonus(int salary)
{
	int b;
	b=salary*10/100;
	return(&b);
}





