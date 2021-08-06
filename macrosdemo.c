/* Program name:macrosdemo.c
   Author: Atish Jain
   Task: Program to work with macros
*/

# include <stdio.h>
# define SIZE 8
main()
{
 int arr[SIZE],i;
 
 srand(time(0));
 for(i=0;i<SIZE;i++)
 {
 	arr[i]=rand()%100;
 }
 
 printf("Array Elements from index 0 to %d",SIZE-1);
 printf("\n--------------------------------");
 
 for(i=0;i<SIZE;i++)
   printf("\n%d - %d",i,arr[i]);
   

printf("\nArray Elements from index %d to 0",SIZE-1);
 printf("\n--------------------------------");
 
 for(i=SIZE-1;i>=0;i--)
   printf("\n%d - %d",i,arr[i]);
   	
 printf("\n");
}




