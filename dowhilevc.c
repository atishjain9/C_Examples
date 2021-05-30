/* Program name: dowhilevc.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read characters and count vowels and consonants till the user inputs x */
   
# include <stdio.h>
# include <ctype.h>
main()
{
 char ch;
 int vc,cc;
 vc=cc=0;
 
 do
 {
  printf("Enter a Character(x to Stop)....:");
  fflush(stdin);
  scanf("%c",&ch);
  
  if( (ch>=65 && ch<=90) ||(ch>=97 && ch<=122) )
   {
   	 ch=tolower(ch);
   	 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   	   vc++;
   	 else
	   cc++;  
   }
  
 }while(ch!='x');

 printf("\nNo of Vowels are %d :",vc);
 printf("\nNo of Consonants are :%d",--cc); 
 

 printf("\n");
}