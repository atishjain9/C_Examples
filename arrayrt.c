/* Program name: arrayrt.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read array size at runtime and declaraing the array*/

# include <stdio.h>
main()
{
 int i,size;
 
 printf("Enter ur Array size...:");
 scanf("%d",&size);
 
 int arr[size];
 
 for(i=0;i<size;i++)
 {
 	printf("\n%d - %d",i,arr[i]);
 }
 
 
 printf("\n");
}
