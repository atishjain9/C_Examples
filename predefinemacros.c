/* Program name: predefinedmacros.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with Pre-defined Macros */
   
   # include <stdio.h>
   main()
   {
   	printf("\nCurrent Date is:%s",__DATE__);
    printf("\nCurrent Time is:%s",__TIME__);
    printf("\nFile Name is:%s",__FILE__);
    printf("\nLine No is:%d",__LINE__);
    printf("\nCode as per ANSI:%d",__STDC__);
    
    printf("\n");
    
   }