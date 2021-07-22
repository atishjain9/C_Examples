/* Program name: swap2func.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Swapping to two nos using functions */


# include <stdio.h>
main()
{
 void swap(int,int); //function declaration	
 int a,b;
 a=b=0;
 
 printf("Enter Value for  A:");
 scanf("%d",&a);
 
 printf("Enter Value for  B:");
 scanf("%d",&b);
 
 swap(a,b);  //function execution/call by value/
 
 printf("\nA is:%d",a);
 printf("\nB is:%d",b);
 
 printf("\n");
}

void swap(int x,int y)
{
	int temp=0;
	temp=x;
	x=y;
	y=temp;
	
	return;
}


