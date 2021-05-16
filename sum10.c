/* Program name: sum10.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to print sum of first 10 natural nos */
   
   # include <stdio.h>
   main()
   {
   	 int no=1,sum=0;
   	 
   	 while(no<=10)
   	 {
 	  sum=sum+no;
 	  no++;
 	 }
     printf("\nSum of First 10 Natural Numbers is:%d",sum); 
 	  
     printf("\n");
   }