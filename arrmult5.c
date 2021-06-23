/* Program name: arrmult5.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to fill the array of 5*5 matrix with multiples of 5*/

# include <stdio.h>
main()
{
 int arr[5][5],i,j,m=5;
 
 //fill the array
 
 for(i=0;i<5;i++)
 {
 	for(j=0;j<5;j++)
 	{
	 	arr[i][j]=m;
	 	m+=5;
	 }
 }

 printf("-------------------------------------\n"); 
 printf("    5 * 5 Array with Multiple of 5");
 printf("\n-------------------------------------\n");
 
 for(i=0;i<5;i++)
 {
 	for(j=0;j<5;j++)
 	{
	 	printf("%d\t",arr[i][j]);
	 }
	 printf("\n\n");
 }
 printf("\n");
}
