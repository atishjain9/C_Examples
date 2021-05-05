/* Program name: relationaldemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Relational Operators */
   
# include <stdio.h>
main()
{
 int res;
 
 res=5>10;
 printf("\n 5>10 = %d",res); //0
 
 res=10>10;
 printf("\n10>10 = %d",res); //0
 
 res=5<=10;
 printf("\n5<=10 = %d",res); //1

 res=5==5;  //1
 printf("\n5==5 = %d",res);
 
 printf("\n%d",9>8==1); //1
 printf("\n%d",9>8!=5); //1
 
  	
 printf("\n");
}
