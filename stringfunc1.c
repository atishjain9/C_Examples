/* Program name:stringfunc1.c
   Author: Atish Jain
   Task: Working with String functions
*/

# include <stdio.h>
# include <string.h>
main()
{
 char str[]="Atish", tar[50];
 
 printf("\nLength of the String is :%d",strlen(str));
 printf("\nString in Lowercase is:%s",strlwr(str));
 printf("\nString in Uppercase is:%s",strupr(str));
 printf("\nReverse of the String is:%s",strrev(str));

 strrev(str); // getting string to original position
 
 strcpy(tar,str);
 printf("\nCopied string is:%s",tar);
 
 printf("\nString Comparison is:%d",strcmp(str,tar));
 
 printf("\nString Comparison is:%d",strcmp("Atish","Bob")); //65,66

 printf("\nString Comparison is:%d",strcmp("Bombay","America")); //66,65
 
 printf("\nString Comparison is:%d",strcmp("ATISH","atish")); //65,97 = -ve

 printf("\nString Comparison is:%d",strcmp("atish","ATISH")); //97,65 = +ve
 
 strcat(str," JAIN");
 printf("\nConcatenated String is:%s",str);
 
 
 
 	
 printf("\n");	
}