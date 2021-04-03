/* Program name: fflushdemo.c
   Author: Atish Jain
   Task: This program objective is explain importance of fflush(stdin)
*/

# include <stdio.h>
main()
{
	char gen,name[50];
	int age;
	
	
	printf("Enter ur First Name....:");
	scanf("%s",&name);
	printf("Enter ur Age...:");
	scanf("%d",&age);
	printf("Enter ur Gender(M/F):");
	fflush(stdin); //cleans the kb buffer
	scanf("%c",&gen);
	
	
	printf("\n\nYour Details are:");
	printf("\n--------------------");
	printf("\nName: %s",name);
	printf("\nAge: %d",age);
	printf("\nGender: %c",gen);
	
	printf("\n");
}