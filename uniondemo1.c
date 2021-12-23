/* Program name:uniondemo1.c
   Author: Atish Jain
   Task: Example on Unions
*/

# include <stdio.h>
main()
{
	union Sample
	{
		int a; //4
		float b; //4
		char c; //1
	}u;
	
	printf("size of union variable u is:%d",sizeof(u));
	
	u.a=10;
	printf("\nvalue of a is:%d",u.a);
	
	u.b=12.50;
	printf("\nvalue of b is:%f",u.b);
	
	u.c='A';
	printf("\nvalue of c is:%c",u.c);
	
	printf("\n");
}