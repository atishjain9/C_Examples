/* Program name:vowel1.c
   Author: Atish Jain
   Task: vowel or consonent checking example
*/ 

# include <stdio.h>
main()
{
 char ch;
 
 printf("Enter a character....:");
 scanf("%c",&ch);
 
 if( (ch>=65 && ch<=90) || (ch>=97 && ch<=122) )
  {
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     printf("%c is a Lowercase Vowel....",ch);
   else
       if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
         printf("%c is a Uppercase Vowel....",ch);
       else
         printf("%c is a Consonant....",ch);	 	
  }
 else
    printf("\aPlease Enter Characters only....");
	
 printf("\n");
}