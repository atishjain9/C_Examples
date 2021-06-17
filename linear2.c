/* Program name: linear2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Search for an Element using Linear Search*/

# include <stdio.h>
main()
{
 int arr[100],n,i,key;
 char found='n';
 
 printf("Enter how many Elements...:(1-100):");
 scanf("%d",&n);
 
 if(!(n>=1 && n<=100) )
 {
 	printf("Invalid Size....");
 	exit(0);
 }
 
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
 		found='y';
	 	printf("%d is Found at %d index...",key,i);
	 	break;
	 }
 }

if(found=='n')
  printf("%d is Not Found....",key); 

 
printf("\n");
}
