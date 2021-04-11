/* Program name:typecast1.c
   Author: Atish Jain
   Task: example on typecasting
*/

# include <stdio.h>
main()
{
 //implicit type casting
 int x=12;
 float y=x;
 
 printf("\ny=%f",y);
 
 char ch=100;
 printf("\nch=%c",ch);	
 
 //Assigning Higher type to lower type
 double d=123.90;
 int a=d;
 printf("\na=%d",a);
 
 printf("\n");
}