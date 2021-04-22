/* Program name:checkchar.c
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
 
 if(ch>=65 && ch<=90)
    printf("%c is Capital Letter....",ch);
 else
     if(ch>=97 && ch<=122)
	    printf("%c is Small Letter...",ch);
	 else
	     if(ch>=48 && ch<=57)
		   printf("%c is a Digit....",ch);
		 else
		     printf("%c is a Special Character....",ch);     
			         
 printf("\n");
}