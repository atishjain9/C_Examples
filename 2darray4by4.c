/* Program name: 2darray4by4.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read user input in 4*4 array*/

# include <stdio.h>
main()
{
 const int RS,CS;
 
 printf("Enter ROW Size and Column size of the Array...:");
 scanf("%d%d",&RS,&CS);
 
 int arr[RS][CS],i,j;
 
 //read data into array
 for(i=0;i<RS;i++)
 {
 	for(j=0;j<CS;j++)
 	{
	 	printf("Enter Element at (%d,%d):",i,j);
	 	scanf("%d",&arr[i][j]);
	 }
 }


//display array elements

printf("Array Elements of %d*%d Matrix are:",RS,CS);
printf("\n-------------------------------\n");
for(i=0;i<RS;i++)
{
	for(j=0;j<CS;j++)
	{
		printf("%d\t",arr[i][j]);
	}
	printf("\n\n");
}
printf("\n");
}
