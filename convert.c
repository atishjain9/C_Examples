/* Program name:convert.c
   Author: Atish Jain
   Task: Program to convert upper case character into lowercase
*/

# include <stdio.h>
main()
{
 char ch;
 
 printf("Enter Uppercase/Capital Letter:");
 scanf("%c",&ch);
 
 printf("The Lowercase Letter is :%c",ch+32);

 printf("\n");
}