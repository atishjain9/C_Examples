/* Program name: linearsort.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Linear sort example*/

# include <stdio.h>
main()
{
 int arr[100],i,j,temp,size;
 
 printf("Enter ur Array Size(1-100)....:");
 scanf("%d",&size);
 
 if(!(size>=1 && size<=100) )
 {
 	printf("Invalid Size...\n");
 	exit(0);
 }
 
 srand(time(0));
 for(i=0;i<size;i++)
 {
 	arr[i]=(rand()%100)+1;  //1 to 100
 }
 
 printf("\nOriginal Array is:");
 printf("\n---------------------\n");
 
 for(i=0;i<size;i++)
 {
 	printf("%d-->",arr[i]);
 }
 printf("\b\b\b   ");
 
 
 //soring logic
 
for(i=0;i<size;i++) 
{
 for(j=i+1;j<size;j++)
 {
   if(arr[i]>arr[j])
    {
 	 temp=arr[i];
 	 arr[i]=arr[j];
 	 arr[j]=temp;
    }
  }
}
 

 printf("\n\n\nSorted Array in Ascending order is:");
 printf("\n-------------------------------------\n");
 
 for(i=0;i<size;i++)
 {
 	printf("%d-->",arr[i]);
 }
 printf("\b\b\b   ");
      
 printf("\n");
}
