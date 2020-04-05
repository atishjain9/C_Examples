/* Program name:ascex1.c
   Author: Atish Jain
   Task: Read character input and print its ascii code
*/

# include <stdio.h>
main()
{
	char x;
	printf("Enter any input:");
	scanf("%c",&x);
	
	printf("ASCII code for %c is %d",x,x);
	
	printf("\n");
}
