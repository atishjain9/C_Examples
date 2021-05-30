/* Program name: prime1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to check whether the given no is prime or not - Logic 1 */
   
# include <stdio.h>
main()
{
 int no,d=1,f=0,count=0;
 
 printf("Enter a no...:");
 scanf("%d",&no);
 
 while(d<=no)
 {
	count++;
 	if(no%d==0)
 	{
  	 f++;
    }
    
  d++;	 
 }

if(f<=2)
  printf("%d is Prime.....",no);
else
  printf("%d is Not Prime....",no);  

printf("\n\nNo of Repetitions are:%d",count);  
printf("\n");
}