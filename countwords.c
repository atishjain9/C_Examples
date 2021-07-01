/* Program name: countwords.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to count number of words from the inputted string*/

# include <stdio.h>
main()
{
 char str[200];
 int i,w=1;
 
 printf("Enter a string....:");
 gets(str);
 
 for(i=0;str[i]!='\0';i++)
 {
 	if(str[i]==' ' && str[i+1]!=' ')
 	  w++;
 }
 
 printf("\nNo of Words are:%d",w);
 printf("\n");
}

