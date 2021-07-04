/* Program name:add2func.c
   Author: Atish Jain
   Task: Program to add two numbers
*/

# include <stdio.h>

main()
{
 int sum(int,int);	//function declaration or function prototype
 
 int a,b,res;
 
 printf("Enter First no...:");
 scanf("%d",&a);
 
 printf("Enter Second no....:");
 scanf("%d",&b);
 
 res=sum(a,b); //function calling/invocation/execution
 
 printf("\nResult is:%d",res);
 printf("\nResult of 100 and 200 is:%d",sum(100,200));
 printf("\n");
}

int sum(int x,int y)
{
	int z; //local variable
	z=x+y;
	return(z);
}




