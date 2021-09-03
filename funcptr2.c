/* Program name: funcandptr2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Functions and Pointers */

#include <stdio.h>
main()
{
	
 void display(char*,int);
 char str[100];
 int len;
 
 printf("Enter ur name....:");
 scanf("%s",&str);
 
 len=strlen(str);
 
 display(str,len);
	
 printf("\n"); 
}

void display(char *s,int l)
{
 int i;
 for(i=0;i<l;i++)
 {
 	printf("\n%u - %c",s+i,*(s+i));
 	
 }	
}




