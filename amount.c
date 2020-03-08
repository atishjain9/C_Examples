/* Program name: amount.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program calculates amount from the inputted rate and quantity */
   
   # include <stdio.h>
   main()
   {
   	int qty;
   	float rate,amt;
   	
   	qty=rate=amt=0;
   	
   	printf("Enter Quantity:");
   	scanf("%d",&qty);
   	
   	printf("Enter rate:");
   	scanf("%f",&rate);
   	
   	amt=rate*qty;
   	
   	printf("The Bill Amount is:%.2f",amt);
   	
   	getch(); //waits a key from keyboard
   	
    printf("\n");
   }
