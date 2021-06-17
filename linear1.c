/* Program name: linear1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Search for an Element using Linear Search*/

# include <stdio.h>
main()
{
 int arr[10],i,key;
 
 
 //Filling the array with random numbers
 srand(time(0));
 for(i=0;i<10;i++)
 {
 	arr[i]=(rand()%100)+1;
 }
 
 printf("\nArray Elements are:");
 printf("\n----------------------\n");
 for(i=0;i<10;i++)
 {
 	printf(" %d ->",arr[i]);
 }
 printf("\b\b  ");
 
 printf("\n\nEnter Key element to Search....:");
 scanf("%d",&key);
 
 //linear search
 
 for(i=0;i<10;i++)
 {
 	if(arr[i]==key)
 	{
	 	printf("%d is Found at %d index...",key,i);
	 	break;
	 }
 }

if(i==10)
  printf("%d is Not Found....",key); 

 
printf("\n");
}
