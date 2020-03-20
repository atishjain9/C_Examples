/* Program name: readstr1.c
   Author: Atish Jain
   Task: Program to read strings.
*/

# include <stdio.h>
main()
{
	char str[100];
	
	printf("Enter ur name:");
	scanf("%[^\n]",&str);
	
	printf("Welcome %s, AH CAREER Welcomes you",str);
	printf("\n");
}
