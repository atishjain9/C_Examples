/* Program name: funccat.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program Work with Different Categories of functions*/

# include <stdio.h>

void f1(void);
void f2(int);
int f3(int);
int f4(void);

main()
{
 int no=5;

 f1();
 f2(no);	
 printf("\nf3-Squre of %d is %d...",no,f3(no));	
 printf("\nf4-Squre of %d is %d...",no,f4());	

 printf("\n");
}

void f1(void)
{
	int x=5;
	printf("\nf1-Square of %d is %d...",x,x*x);
}

void f2(int x)
{
 printf("\nf2-Square of %d is %d...",x,x*x);	
}

int f3(int x)
{
	return(x*x);
}
int f4(void)
{
	int x=5;
	return(x*x);
}