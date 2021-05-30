/* Program name: prime3.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to check whether the given no is prime or not - Logic 3 */
   
# include <stdio.h>
main()
{
 int no,d=2,count=0;
 char isprime='y';
 
 printf("Enter a no....:");
 scanf("%d",&no);
 
 while(d<(no/2))
 {
 	count++;
 	
 	if(no%d==0)
 	{
	  isprime='n';	 
 	  break;
 	}
 
 d++;	  
 }
 
if(isprime=='y')
   printf("%d is Prime....",no);
else
   printf("%d is Not Prime....",no); 

printf("\n\nNo of Repetitions are:%d",count); 
printf("\n");
}