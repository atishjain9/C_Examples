/* Program name: strdisplay.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to read a string and display character by character*/

# include <stdio.h>
# include <string.h>

main()
{
	char str[100];
	int len,i;
	
	printf("Enter a String...:"); 
	scanf("%s",&str);
	
	//method 1
	len=strlen(str);
	
	printf("\nString Traversing using String Length\n");
	for(i=0;i<len;i++)
	{
		printf("%c*",str[i]);
	}
	
	//method 2
	printf("\n\nString Traversing using null character\n");

	for(i=0;str[i]!='\0';i++)
	{
		printf("%c->",str[i]);
	}
	
	
	
		
    printf("\n");
}

