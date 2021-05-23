/* Program name: returndemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work return keyword */
   
# include <stdio.h>
main()
{
 int no,sum=0;
 
 while(1)
 {
 	printf("Enter a no(0 or -ve no to stop...):");
 	scanf("%d",&no);
 	
 	if(no==0)
 	  break; //goes out of the while block
 	else
	    if(no<0)
		   return; //goes out of the main() function
        
     sum=sum+no;
 }
 
 printf("\nSum of Inputted Numbers is:%d",sum);
	   
 printf("\n");
}