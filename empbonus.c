/* Program name: empbonus.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with call by value and call by reference*/

# include <stdio.h>
main()
{
 void calcbonus(int,int*);
 int salary,bonus;
 salary=bonus=0;
 
 printf("Enter Employee Salary:");
 scanf("%d",&salary);
 
 calcbonus(salary,&bonus);
 
 printf("Bonus is :%d",bonus);
	
 	
 printf("\n");
}

void calcbonus(int salary,int *bonus)
{
	*bonus=salary*10/100;
}