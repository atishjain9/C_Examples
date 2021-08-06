/* Program name: globalandlocal.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work with Global and Local Declarations */
   
   # include <stdio.h>
   
   int y=20; //global variable
   main()
   {
   	 int x=10; //local variable
   	 
   	 printf("Local Variable x is:%d",x); //accessed
   	 printf("\nGlobal Variable y is:%d",y); //accessed
   	 
   	 
   	 display();
     printf("\n");
   }
   
   display()
   {
   	printf("\nGlobal y is:%d",y);
   	//printf("\nLocal x is:%d",x);
   }
   
   