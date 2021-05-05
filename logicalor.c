/* Program name: logicalor.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Logical or Operator Example */
   
   # include <stdio.h>
   main()
   {
   	
   	//ex 1
   	int x,y;
    x=5;
    y=x==4 || x==10;
    printf("\n%d",y); //0
    
    //ex 2
    x=3;
    y=!(x>5) || 10==10; //1
    printf("\n%d",y);


       
    //ex 3
	int a=10,b=5;
	int c=25;

	c= a==10 || ++b>5;
 
	printf("\na=%d",a);
	printf("\nb=%d",b); 
	printf("\nc=%d",c);
  
    printf("\n");
   }