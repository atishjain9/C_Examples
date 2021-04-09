/* Program name:sizeofdemo.c
   Author: Atish Jain
   Task: working with sizeof operator
*/

# include <stdio.h>
main()
{
 int x=10;
 char ch='a';
 float f=12.50;
 double d=19.90;
 
 printf("\nNo of Bytes Occupied by x is :%d",sizeof x);
 printf("\nNo of Bytes Occupied by int is:%d",sizeof(int));	

 printf("\n\nNo of Bytes Occupied by ch is :%d",sizeof ch);
 printf("\nNo of Bytes Occupied by char is:%d",sizeof(char));	
  

 printf("\n");
}