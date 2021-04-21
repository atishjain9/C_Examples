/* Program name: passfail.c
   Author: Atish Jain
   Task: program to check whether the student is passed or failed
*/

# include <stdio.h>
main()
{
 float avg=0;
 
 printf("Enter ur Average Marks....:");
 scanf("%f",&avg);
 
 
 if(avg>=40)
 {
 	printf("Heyy ! Ur Passed.....");
 	printf("\nWow.....! Congrats.....");
 }
 else
 {
  	printf("Ur Failed....");
  	printf("\nOhhh! Better luck Next Time....");
 }
 
 printf("\nPlease Visit the School Once....");
 
 printf("\n");
}