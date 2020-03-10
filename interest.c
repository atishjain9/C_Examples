/* Program name: Interest.c
   Author: Atish Jain
   Task: Program to calcualte simple interest
*/

# include <stdio.h>
main()
{
	int p,t,r,i;
	p=t=r=i=0;
	
	printf("Enter Principle Amount:");
	scanf("%d",&p);
	
	printf("Enter Time in Years:");
	scanf("%d",&t);
	
	printf("Enter rate of interest per Annum:");
	scanf("%d",&r);
	
	i=(p*t*r)/100;
	
	printf("Intrest for Rs.%d for %d years is Rs.%d",p,t,i);
	
	printf("\n");
}
