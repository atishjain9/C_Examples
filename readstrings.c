/* Program name: readstrings.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read 5 names and display*/

# include <stdio.h>
main()
{
	char names[5][20];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter %d Name...:",i+1);
		gets(names[i]);
	}
	
	printf("\n\nThe List of Inputted Names are:\n");
	printf("----------------------------------");
	for(i=0;i<5;i++)
	{
		printf("\n%d. %s",i+1,names[i]);
	}

printf("\n");
}
