/* Program name: funcptrdemo2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Function Pointers Demo */

#include <stdio.h>
main()
{
 void add(int,int);
 void sub(int,int);
 
 void (*p)(int,int);
 
 int a,b;
 char ch;
 
 printf("Enter a no...:");
 scanf("%d",&a);
 
 printf("Enter another no...:");
 scanf("%d",&b);
 
 
 printf("Enter ur Option(+,-):");
 fflush(stdin);
 ch=getchar();
 
 if(ch=='+')
    p=add;
 else
     if(ch=='-')
       p=sub;
     else
        printf("Invalid Option Entered....");
 
 p(a,b); //function call using function pointer
        
 printf("\n"); 
}

void add(int x,int y)
{
	printf("Addition Result  is:%d",(x+y));
}

void sub(int x,int y)
{
	printf("Subtraction Result  is:%d",(x-y));
}