/* Program name: arrayex1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read array of 10 elements and display the same*/

# include <stdio.h>
main()
{
 int i,no[10];
 
 for(i=0;i<10;i++)
 {
   printf("Enter %d no...:",i+1);
   scanf("%d",&no[i]);
 }
 
 for(i=0;i<10;i++)
 {
 	printf("\n%d - %d",i,no[i]);
 }
 
 
  printf("\n");
}
