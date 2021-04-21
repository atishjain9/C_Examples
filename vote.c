/* Program name: vote.c
   Author: Atish Jain
   Task: program to check whether the person is eligible or not for voting
*/

# include <stdio.h>
main()
{
 int age=0;
 
 printf("Enter ur Age....:");
 scanf("%d",&age);
 
 if(age>=18)
 {
 	printf("Ur Eligible....");
 }
		
 printf("\n");
}