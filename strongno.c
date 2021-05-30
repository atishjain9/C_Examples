/* Program name: strongno.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Strong no Example */

# include <stdio.h>
main()
{
 int no,r,f=1,sum,temp;
 sum=0;
 
 printf("Enter a no...:");
 scanf("%d",&no);
 
 temp=no;
 
 while(no>0)
 {
 	r=no%10;
 	
 	f=1;
 	for(;r>=1;r--)
 	{
	 	f=f*r;
	 }
	 sum=sum+f;
	 no=no/10;
 }

no=temp;

if(no==sum)
  printf("%d is Strong no....",no);
else
  printf("%d is not Strong no...",no);
      
printf("\n");
}


