/* Program name: funcandptr1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Functions and Pointers */

#include <stdio.h>
main()
{
 int displaysum(int *);
 int arr[5]={12,56,7,89,76};
 int *p,sum;
 
 sum=displaysum(arr); //displaysum(&arr[0]) or displaysum(&arr)
 
 printf("\nSum of Elements is:%d",sum);
 	
 printf("\n"); 
}

int displaysum(int *x)
{
 int i,sum=0;
 for(i=0;i<5;i++)
 {
 	printf("\n%u - %d",x,*x);
    sum=sum+*x;	
    x++; //moves to next element
 }	
 return (sum);
}

