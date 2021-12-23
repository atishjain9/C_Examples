/* Program name: enum1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on enum */
   
# include <stdio.h>

enum month{jan=5,feb=8,mar=15,apr=10,may=10,jun=10,jul=9,aug=9,sep=9,oct=10,nov=7,dec=15};
main()
{
 enum month discount;
 int percentage;
 
 discount=mar;
 
 percentage=discount;
 
 printf("Discount percentage is:%d",percentage);
 
 

 printf("\n");
}

