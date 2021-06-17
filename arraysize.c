/* Program name: arraysize.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print size of different arrays*/

# include <stdio.h>
main()
{
 char name[10];
 int a[20];
 double b[20];
 
 printf("Memory Occupied by name array is:%d",sizeof(name));  //10
 printf("\nMemory Occupied by arry a is:%d",sizeof(a)); //80
 printf("\nMemory Occupied by array b is:%d",sizeof(b)); //160
 printf("\n");
}
