/* Program name: prime2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to check whether the given no is prime or not - Logic 2 */
   
# include <stdio.h>
main()
{
 int no,d=2,count=0;
 
 printf("Enter a no....:");
 scanf("%d",&no);
 
 while(d<no)
 {
 	count++;
 	
 	if(no%d==0)
 	  break;
 
 d++;	  
 }
 
 if(no==d)
   printf("%d is Prime....",no);
else
   printf("%d is Not Prime....",no); 

printf("\n\nNo of Repetitions are:%d",count); 
printf("\n");
}