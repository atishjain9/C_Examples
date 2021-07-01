/* Program name: stringarr.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to declare and initialize string array*/

# include <stdio.h>
main()
{
 int i;
 //method 1	
 //char names[3][30]={"Raj","Prem","Kushi"};
 
 //method 2
 //char names[][20]={"Hari","John","David"};
 
 //method 3
 /*char names[3][30]={
 	                {'R','A','J','\0'},
 	                {'R','A','J','U','\0'},
 	                {'R','A','J','E','S','H','\0'}
                    };
 */	

 //method 4
 char names[][30]={
 	                {'R','A','J','\0'},
 	                {'R','A','J','U','\0'},
 	                {'R','A','J','E','S','H','\0'}
                    };
 
 
for(i=0;i<3;i++) 
  printf("%d. %s\n",i+1,names[i]);
 
 	
 
	

printf("\n");
}
