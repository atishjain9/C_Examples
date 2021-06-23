/* Program name: 3darray1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Working with 3d array*/

# include <stdio.h>
main()
{
 int k,i,j	;
 int a[2][3][3];
 
 srand(time(0));
 for(k=0;k<2;k++)
 {
 	for(i=0;i<3;i++)
 	{
	 	for(j=0;j<3;j++)
	 	{
	 		//printf("Enter Element at %d array %d Row and %d Column..:",k+1,i+1,j+1);
	 		//scanf("%d",&a[k][i][j]);
	 		a[k][i][j]=(rand()%100)+1;
	 	}
	 }
 }
 
 printf("\n\n3d Array Elements are:");
 printf("\n----------------------\n");
 for(k=0;k<2;k++)
 {
 	for(i=0;i<3;i++)
 	{
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%3d\t",a[k][i][j]);
	 	}
	 	printf("\n");
	 }
	 printf("\n------------------\n");
 }
 printf("\n");
}
