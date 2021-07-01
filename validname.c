/* Program name:validname.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read a name and check for not null validation*/

# include <stdio.h>
main()
{
	char name[50];
	
	while(1)
	{
		printf("Enter ur Valid Name....:");
		gets(name);
		
		if(name[0]==' '|| name[0]==NULL)
		{
			printf("\nName Cannot be Blank....");
			getch();
			system("cls");
		}
		else
		  break;
	}
	
	printf("Heyy %s Your Application is Successfully Registered....",name);

	printf("\n");
}

