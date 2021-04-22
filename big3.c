/* Program name: big3.c
   Author: Atish Jain
   Task: Biggest of 3 nos
*/

# include <stdio.h>
main()
{
 int a,b,c;
 a=b=c=0;
 
 printf("Enter 3 no's...:");
 scanf("%d%d%d",&a,&b,&c);
 
 if(a>b)
   if(a>c)
     printf("Biggest no is:%d",a);
   else
     printf("Biggest no is:%d",c);
 else
     if(b>c)
       printf("Biggest no is:%d",b);
     else
       printf("Biggest no is:%d",c);
	   

 printf("\n");
}