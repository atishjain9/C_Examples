/* Program name: linear3.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Search for an Element using Linear Search*/

# include <stdio.h>
main()
{
 int n,i,key;
 int flag=0;
 
 printf("Enter how many Elements...:");
 scanf("%d",&n);
 
 int arr[n];
 
 
 //Filling the array with random numbers
 srand(time(0));
 for(i=0;i<n;i++)
 {
 	arr[i]=(rand()%100)+1;
 }
 
 printf("\nArray Elements are:");
 printf("\n----------------------\n");
 for(i=0;i<n;i++)
 {
 	printf(" %d ->",arr[i]);
 }
 printf("\b\b  ");
 
 printf("\n\nEnter Key element to Search....:");
 scanf("%d",&key);
 
 //linear search
 
 for(i=0;i<n;i++)
 {
 	if(arr[i]==key)
 	{
 		flag=1;
	 	break;
	 }
 }

if(flag==1)
  printf("%d is Found at %d Position...",key,i+1);
else	 	
  printf("%d is Not Found....",key); 

printf("\n");
}
