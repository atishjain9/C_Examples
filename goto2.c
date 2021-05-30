/* Program name: goto2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print natural numbers using goto */
   
# include <stdio.h>
main()
{
 int no=1;
 
 atish:
 printf("\t%d",no++);
 
 if(no<=100)
   goto atish;
   	   
   printf("\n");
 }