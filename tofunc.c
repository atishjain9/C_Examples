/* Program name:tofunc.c
   Author: Atish Jain
   Task: Convert upper case to lowercase and vice versa
*/ 

# include <stdio.h>
# include <ctype.h>
main()
{
 char ch;
 
 printf("Enter an Alphabet(A-Z or a-z)...:");
 scanf("%c",&ch);
 
 if(ch>=65 && ch<=90)
   printf("%c in Lowercase is %c",ch,tolower(ch));
 else
     if(ch>=97 && ch<=122)
	   printf("%c in Uppercase is %c",ch,toupper(ch));
	 else
	     printf("\aPlease Enter Alphabets only...");
   
 
 printf("\n");
}