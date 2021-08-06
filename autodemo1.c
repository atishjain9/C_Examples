/* Program name:autodemo1.c
   Author: Atish Jain
   Task: demo on auto storage class variables
*/

# include <stdio.h>
main()
{
 int a=10;//function scope
 
 if(++a==11)
 {
 	int i;
 	int a=11; //block scope
 	for(i=1;i<=3;i++)
 	{
	 	printf("\na = %d",++a);
	 }
 }
 
 printf("\na value out of the if block is:%d",a);
 
 
 printf("\n");
}


