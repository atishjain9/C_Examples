/* Program name: runtimeerrors.c
   Author: Atish Jain
   Task:
*/

# include <stdio.h>
main()
{
 int no,d,res;
 
 no=d=res=0;
 printf("Enter a no:");
 scanf("%d",&no);
 
 printf("Enter Divider:");
 scanf("%d",&d);
 
 res=no/d;
 
 printf("Result is:%d",res);
 
 
 printf("\n");
}