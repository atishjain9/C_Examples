/* Program name: strptr.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : String and Pointers */

#include <stdio.h>
main()
{
	
  char name[50],*x;
  
  printf("Enter ur Name...:");
  gets(name);
  
  x=name; //x=&name[0] or x=&name
  
  while (*x!='\0')
  {
  	printf("\n%u - %c",x,*x);
  	x++;
  }
   
   printf("\n"); 
}
