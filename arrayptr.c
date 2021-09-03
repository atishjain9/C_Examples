/* Program name: arrayptr.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Array and Pointers */

#include <stdio.h>
main()
{
 int arr[10],*ptr;
 int i;
 
 srand(time(0));
 for(i=0;i<10;i++)
 {
  arr[i]=rand()%100;	
 }
 
 ptr=arr; //ptr=&arr[0] or ptr=&arr;
 
 for(i=0;i<10;i++)
 {
 	printf("\n%u - %d",ptr+i,*(ptr+i));
 }
 
  
  printf("\n"); 
}
