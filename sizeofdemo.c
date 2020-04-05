/* Program name:sizeofdemo.c
   Author: Atish Jain
   Task: working with sizeof() function
*/

# include <stdio.h>
main()
{
	int x=10;
	char ch='a';
	float y=12.50;
	double z=45.70;
	
	  printf("\nno of bytes occupied by int is:%d",sizeof(int));
    printf("\nno of bytes occupied by x is:%d",sizeof(x));
	  printf("\nno of bytes occupied by char is:%d",sizeof(char));
    printf("\nno of bytes occupied by ch is:%d",sizeof(ch));
	  printf("\nno of bytes occupied by float is:%d",sizeof(float));
    printf("\nno of bytes occupied by y is:%d",sizeof(y));
   	printf("\nno of bytes occupied by double is:%d",sizeof(double));
    printf("\nno of bytes occupied by z is:%d",sizeof(z));

	printf("\n");
}
