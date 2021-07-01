/* Program name: uplo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Convert inputted string from uppercase to lowercase and vice versa*/

# include <stdio.h>
main()
{
	char str[100];
	int i;
	
	printf("Enter a String....:");
	scanf("%[^\n]",&str);
	
	//change to uppercase
	printf("\nOutput in Uppercase is: ");
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		   putchar(str[i]);
		else
		    if(str[i]>=97 && str[i]<=122)
			   putchar(str[i]-32);
			else
			   putchar(str[i]);      
	}

	//change to lowercase
	printf("\nOutput in lowercase is: ");
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		   putchar(str[i]+32);
		else
		    if(str[i]>=97 && str[i]<=122)
			   putchar(str[i]);
			else
			   putchar(str[i]);      
	}
	
	//change to vice versa
	printf("\nOutput in lowercase is: ");
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		   putchar(str[i]+32);
		else
		    if(str[i]>=97 && str[i]<=122)
			   putchar(str[i]-32);
			else
			   putchar(str[i]);      
	}

	
	
    printf("\n");
}

