/* Program name: strlength.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to read a string and calculate its length with outlibrary function*/

# include <stdio.h>
main()
{
 char str[100];
 int i,len=0;
 
 printf("Enter a string....:");
 scanf("%[^\n]",&str);
 
 //logic 1
  for(i=0;str[i]!='\0';i++)
 {
 	len++;
 }
 
 printf("\nLength of the String without using strlen() function is:%d",len);
 
 
 //logic 2
 
 i=0;
 len=0;
 while(1)
 {
 	if(str[i]!='\0')
 	  len++;
 	else
	  break;  
  i++;	  
 }

printf("\nLength of the string without using strlen() function is:%d",len); 
	
  printf("\n");
}

