/* Program name: fflushdemo.c
   Author: Atish Jain
   Task: This program objective is explain importance of fflush(stdin)
*/

# include <stdio.h>
main()
{
	char gen,ms;
	int age;
	
	printf("Enter ur Gender(m/f):");
	fflush(stdin);
	scanf("%c",&gen);
	
	printf("Enter ur age:");
	scanf("%d",&age);
	
	printf("Enter ur Marital status([m]arried/[u]nmarried):");
	fflush(stdin);
	scanf("%c",&ms);
	
	printf("\nGender:%c",gen);
	printf("\nAge:%d",age);
	printf("\nMarital:%c",ms);
	
	printf("\n");
}
