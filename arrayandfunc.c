/* Program name: arrayandfunc.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Passing array to a function */
   
   # include <stdio.h>
   int i; //global declaration
   main()
   {
   	void display(int[]); //func declaration
   	int arr[10];
   	
   	//logic to fill the array with random numbers
   	
   	srand(time(0));
   	for(i=0;i<10;i++)
   	{
	 arr[i]=(rand()%100)+1;
   	}
   	
   	display(arr);
    printf("\n");
   }
   
   void display(int a[])
   {
  	printf("\nArray Elements Filled with Random Numbers...");
   	for(i=0;i<10;i++)
   	{
	   	printf("\n%d - %d",i,a[i]);
    }
   }
   
   