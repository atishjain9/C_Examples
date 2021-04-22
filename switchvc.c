/* Program name: switchvc.c
   Author: Atish Jain
   Task: switch-case fall through example
*/

# include <stdio.h>
main()
{
 char ch;
 
 printf("Enter a character....:");
 scanf("%c",&ch);
 
 if(!((ch>=65 && ch<=90) || (ch>=97 && ch<=122)))
   printf("Pls Enter Alphabets... only....");
 else
 {
 	switch(ch)
 	{
	 	case 'A': 
	 	case 'E':
	 	case 'I':
	 	case 'O':
	 	case 'U':
	 	case 'a':
	 	case 'e':
	 	case 'i':
	 	case 'o':
	 	case 'u':printf("%c is Vowel.....",ch); break;
	 	default: printf("%c is Consonant...",ch); break;
	 }
 }
   
printf("\n");
}