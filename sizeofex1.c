/* Program name:sizeofex1.c
   Author: Atish Jain
   Task: working with sizeof operator
*/

# include <stdio.h>
main()
{
 int no=10;
 char ch='a';
 float x=12.50;
 
 printf("\nsize of int is:%d",sizeof(int));
 printf("\nsize of no is:%d",sizeof no);
 printf("\nsize of 10 is:%d",sizeof(10));
 
 printf("\n\nsize of char is:%d",sizeof(char));
 printf("\nsizeof ch is:%d",sizeof(ch));
 printf("\nsize of a is:%d",sizeof('a'));
 
 printf("\n\nsize of float is:%d",sizeof(float));
 printf("\nsize of x is:%d",sizeof(x));
 printf("\nsize of 12.50 is:%d",sizeof(12.50));
 
 printf("\n\nsize of hello is:%d",sizeof("Atish Jain"));
 
	
	printf("\n");
}