/* Program name: logicaland.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Logical and Operator Example */
   
   # include <stdio.h>
   main()
   {
   	
   	
   	//ex 1
   	int x,y;
   	x=5;
    y=x>4&&x==10;
    printf("\n%d",y); //0
    
    //ex 2
    x=3;
    y=!(x>5);
    
    printf("\n%d",y); //1


       
    //ex 3
	int a=10,b=5;
    int c=6;
    c= a==10 && ++b>5; 
    printf("\na=%d",a);
    printf("\nb=%d",b); 
    printf("\nc=%d",c);
  
    printf("\n");
   }