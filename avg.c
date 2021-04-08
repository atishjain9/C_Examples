/*
 Program name: avg.c
 Author: Atish Jain
 IDE: C-Free 5.0
 Task: Calculates Total & Average marks 
*/

# include <stdio.h>
main()
{
	int m,p,c;
	float tot,avg;
	m=p=c=tot=avg=0;
	
	printf("Enter Maths Marks:");
	scanf("%d",&m);
	
	printf("Enter Physics Marks:");
	scanf("%d",&p);
	
	printf("Enter Chemistry Marks:");
	scanf("%d",&c);
	
	tot=m+p+c;
	avg=tot/3;
	
	printf("\nTotal is:%.0f",tot);
	printf("\nAverage is:%.2f %%",avg);
	
	printf("\n");
	
}