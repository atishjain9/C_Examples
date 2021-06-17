/* Program name: evenarray.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to fill the Array with Even Numbers*/

# include <stdio.h>
main()
{
 int a[100],i,size,e=2;
 
 printf("Enter How Many Elements you Want to Fill(Max - 100)...:");
 scanf("%d",&size);
 
 if(size>100)
 {
 	printf("Invalid size...");
 	exit(0);
 }
 
 for(i=0;i<size;i++)
 {
 	a[i]=e;
 	e+=2;
 }
 
 printf("Array Filled with Even Numbers...");
 printf("\n------------------------------\n");
 for(i=0;i<size;i++)
 {
 	printf("\n%d - %d",i,a[i]);
 }
    	
  printf("\n");
}
