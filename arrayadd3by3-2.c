/* Program name: arradd3by3-2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to add two arrays(3*3) and store the result in 3rd array*/

# include <stdio.h>
main()
{
 int a[3][3],b[3][3],c[3][3],i,j;
 
 //Filling arrays
 
 
 srand(time(0));
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  	a[i][j]=(rand()%10)+1;
  } 	
 }
 

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
  	b[i][j]=(rand()%10)+1;
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
