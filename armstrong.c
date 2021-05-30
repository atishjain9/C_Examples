/* Program name: armstrong.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Program to check whether the inputted no is armstrong or not */

# include <stdio.h>
main()
{
 int no,r,sum,temp;
 no=r=sum=temp=0;
 
 printf("Enter a no....:");
 scanf("%d",&no);
 
 temp=no;
 
 while(no>0)
 {
 	r=no%10;
 	sum=sum+(r*r*r);
 	no=no/10;
 }
 
 no=temp;
 
 if(no==sum)
   printf("%d is ArmStrong No...",no);
 else
   printf("%d is Not An ArmStrong No...",no);

 printf("\n");
}