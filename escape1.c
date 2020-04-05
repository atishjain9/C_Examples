/* Program name:escape1.c
   Author: Atish Jain
   Task: Example on Escape sequence
*/

# include <stdio.h>
main()
{
	// model 1: \n
	printf("Welcome\n");
	printf("Programmers");

    printf("\n");
	// model 2: \n
	printf("Welcome");
	printf("\nProgrammers");

    printf("\n");	
	
	// model 2: \n
	printf("Welcome\nProgrammers");


    printf("\n");
    // about \t
	printf("Atish   Jain");	
	printf("\nWelcome\tAtish");
	printf("\nAtish\tJain");
   
   
    printf("\n");
    //about \b
    printf("Atish\bJain");
    printf("Atish\b\b\b\bJain");    

    printf("\n");
    //about \r
    printf("Atish\rJain");
    printf("Welcome\rAtish");    

    printf("\n");
    /* about \\ */
    printf("\\n is used for new line");
    
    printf("\n");
    //about \' and \"
    printf("\nI Am Learning \"C Programming\" from \'Atish\' Jain Sir");

    printf("\n");   
    //about \a
    printf("\nAtish\aJain");
  
   printf("\n");
}
