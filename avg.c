/* Program name: avg.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Calculates Total & Average marks */
# include <stdio.h>

# include <stdio.h>
main()
{
	int mat,phy,che;
	float tot,avg;
	
	printf("Enter marks for Maths:");
	scanf("%d",&mat);
	
	printf("Enter marks for Physics:");
	scanf("%d",&phy);
	
	printf("Enter marks for Chemistry:");
	scanf("%d",&che);
	
	
	tot=mat+phy+che;
	
	avg=tot/3;
	
	printf("\nTotal is:%.0f",tot);
	printf("\nAverage is:%.2f",avg);
	printf("\n");
	
}
