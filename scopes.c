/* Program name: scopes.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work Different levels of scopes */
   
   # include <stdio.h>
   
   int p=100; //program scope
   main()
   {
   	int f=500; //function scope
   	
   	if(f>=100)
   	{
     int b=200;
     printf("\nAccessing from block scope: ");
     printf("\n----------------------------");
     printf("\nProgram scope variable p is:%d",p);
     printf("\nFunction scope variable f is:%d",f);
     printf("\nBlock Scope variable b is:%d",b);
    }
     printf("\nAccessing from function scope:");
     printf("\n------------------------------");
     printf("\nProgram scope variable p is:%d",p);
     printf("\nFunction scope variable f is:%d",f);
     //printf("\nBlock Scope variable b is:%d",b);
     
     display();
   	
     printf("\n");
   }
   
   display()
   {
     printf("\nAccessing from program scope:");
     printf("\n-----------------------------");
   	 printf("\nProgram scope variable p is:%d",p);
     //printf("\nFunction scope variable f is:%d",f);
     //printf("\nBlock Scope variable b is:%d",b);
   }
   
   