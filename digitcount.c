/* Program name: digitcount.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Write a program to count number of digits from the inputted no */
   
   # include <stdio.h>
   main()
   {
 	 int no,count;
 	 no=count=0;
 	 
 	 
 	 printf("Enter a no....:");
 	 scanf("%d",&no);
 	 
 	 while(no>0)
 	 {
 	  no=no/10;
 	  count++;
 	 }
 	 printf("\nNo of Digits are:%d",count);
 	 
     printf("\n");
   }