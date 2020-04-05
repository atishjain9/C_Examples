/* Program name:ascex2.c
   Author: Atish Jain
   Task: Read ASCII code and print its ascii character
*/

# include <stdio.h>
main()
{
	int x;
	
	printf("Enter ASCII code(0-255):");
	scanf("%d",&x);
	
	printf("ASCII Character for %d is %c",x,x);
	
	printf("\n");
}
