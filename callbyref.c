/* Program name: callbyref.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on call by ref*/

# include <stdio.h>
main()
{
 void swap(int*,int*);
 int a,b;
 
 printf("Enter value for A:");
 scanf("%d",&a);	

 printf("Enter value for B:");
 scanf("%d",&b);
 
 swap(&a,&b); //call by reference	
 
 printf("\nA is:%d",a);
 printf("\nB is:%d",b);
 	
 printf("\n");
}

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
