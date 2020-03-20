/* Program name: readchar.c
   Author: Atish Jain
   Task: Reading a character
*/

# include <stdio.h>
main()
{
	char type;
	
	printf("Enter Transaction type(d/w):");
	scanf("%c",&type);
	
	printf("The Transaction is is:%c",type);
	
	printf("\n");
}
