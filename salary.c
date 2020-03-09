/* Program name: Salary.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Calculates Gross Salary, Net Salary and Bonus */
# include <stdio.h>
main()
{
	int ba,all,ded,gs,ns,bonus;
	ba=all=ded=gs=ns=bonus=0;
	
	printf("Enter Baisc Salary...:");
	scanf("%d",&ba);
	
	printf("Enter Allowances..:");
	scanf("%d",&all);
	
	printf("Enter Deductions..:");
	scanf("%d",&ded);
	
	gs=ba+all;
	ns=gs-ded;
	
	bonus=ns*3;
	
	printf("Gross Salary is:%d",gs);
	printf("\nNet Salary is:%d",ns);
	printf("\nBonus is:%d",bonus);
	
	printf("\n");
}
