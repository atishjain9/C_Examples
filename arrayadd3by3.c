/* Program name: arradd3by3.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to add two arrays(3*3) and store the result in 3rd array*/

# include <stdio.h>
main()
{
 int a[3][3],b[3][3],c[3][3],i,j;
 
 //Reading input
 
 printf("Enter Elements for First Array:");
 printf("\n-----------------------------\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  	scanf("%d",&a[i][j]);
  } 	
 }
 

 printf("Enter Elements for Second Array:");
 printf("\n-----------------------------\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  	scanf("%d",&b[i][j]);
  } 	
 }

//add the arrays

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
}	

system("cls");
 
printf("\nFirst Array");
printf("\n-----------\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}

printf("\n\t+");

printf("\nSecond Array");
printf("\n-----------\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
}

printf("\n\t=");

printf("\nResult Array");
printf("\n-----------\n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",c[i][j]);
	}
	printf("\n");
}

 
 printf("\n");
}
