/* Program name:checkchar1.c
   Author: Atish Jain
   Task: program to check whether the inputted character is capital letter or 
   small letter or digit or special character.
*/ 

# include <stdio.h>
main()
{
 char ch;
 
 printf("Enter a Any Data Item:");
 scanf("%c",&ch);
 
 if(ch>='A' && ch<='Z')
    printf("%c is Capital Letter....",ch);
 else
     if(ch>='a' && ch<='z')
	    printf("%c is Small Letter...",ch);
	 else
	     if(ch>='0' && ch<='9')
		   printf("%c is a Digit....",ch);
		 else
		     printf("%c is a Special Character....",ch);     
			         
 printf("\n");
}