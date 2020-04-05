/* Program name: datatypes.c
   Author: Atish Jain
   Task: datatypes and their sizes
*/

# include <stdio.h>
main()
{
	printf("\nno of bytes occupied by char :%d",sizeof(char));
	printf("\nno of bytes occupied by signed char :%d",sizeof(signed char));
	printf("\nno of bytes occupied by unsigned char :%d",sizeof(unsigned char));
	printf("\n-------------------------------------------------");
	printf("\nno of bytes occupied by int : %d",sizeof(int));
	printf("\nno of bytes occupied by signed int : %d",sizeof(signed int));
	printf("\nno of bytes occupied by unsigned int : %d",sizeof(unsigned int));
	printf("\n-------------------------------------------------");
	printf("\nno of bytes occupied by short : %d",sizeof(short));
	printf("\nno of bytes occupied by short int : %d",sizeof(short int));
	printf("\nno of bytes occupied by signed short : %d",sizeof(signed short));	
	printf("\nno of bytes occupied by signed short int : %d",sizeof(signed short int));	
	printf("\nno of bytes occupied by unsigned short : %d",sizeof(signed short));	
	printf("\nno of bytes occupied by unsigned short int : %d",sizeof(unsigned short int));	
	printf("\n-------------------------------------------------");
	printf("\nno of bytes occupied by long : %d",sizeof(long));	
	printf("\nno of bytes occupied by long int : %d",sizeof(long int));	
	printf("\nno of bytes occupied by signed long : %d",sizeof(signed long));	
    printf("\nno of bytes occupied by signed long int : %d",sizeof(signed long int));	
    printf("\nno of bytes occupied by unsigned long : %d",sizeof(signed long int));	
    printf("\nno of bytes occupied by unsigned long int : %d",sizeof(unsigned long int));	
	printf("\n-------------------------------------------------");
	printf("\nno of bytes occupied by long long: %d",sizeof(long long));	
	printf("\nno of bytes occupied by long long int: %d",sizeof(long long int));	
	printf("\nno of bytes occupied by signed long long : %d",sizeof(signed long long));	
	printf("\nno of bytes occupied by signed long long int: %d",sizeof(signed long long int));	
	printf("\nno of bytes occupied by unsigned long long : %d",sizeof(unsigned long long));	
	printf("\nno of bytes occupied by unsigned long long int: %d",sizeof(unsigned long long int));	
	printf("\n-------------------------------------------------");
	printf("\nno of bytes occupied by float: %d",sizeof(float));
	printf("\nno of bytes occupied by double: %d",sizeof(double));
	printf("\nno of bytes occupied by long double: %d",sizeof(long double));
	printf("\n");
}
