/* Program name:escape1.c
   Author: Atish Jain
   Task: Example on Escape sequence
*/

# include <stdio.h>
main()
{
 //1.Woring with \n
 //Method 1
 printf("Welcome");
 printf("Programmers");	
 
 printf("\n");
 
 //Method 2
 printf("Welcome");
 printf("\nProgrammers");

 printf("\n");

 //Method 3
 printf("Welcome\n");
 printf("Programmers");


 //Method 4
 printf("\nWelcome\nProgrammers");
 
 
 printf("\n");

 //2.Woring with \t
 
 printf("Atish\t\tJain");
 
 printf("\n");
 
 //3.Woring with \b

 printf("Atish\bJain");
 printf("\nAtish\b\b\b\bJain"); 

 //4.Woring with \r
 printf("\n");
 
 printf("Coding\rCareer");
 printf("\nAtish\rRaj Jain");
 printf("\nAtish\rJain");
 
 //5.Woring with \\
 printf("\n");
 
 printf("Heyy My Name is Naveen and My files are Stored in e:\\naveen folder");
 printf("\nHeyy Myself Tarun, and My Bio Data is Stored at d:\\tarun Folder");
 
 //6 & 7 Working with " and '
 printf("\nHeyy I am Learning \"C Programming\" from \'Atish Jain\' Sir");
 
 //Working with \a for alert sound
 
 printf("\n\n\aInvalid Option input....\a");
 printf("\a\a\a\a\a\a");
 
 printf("\n");
}