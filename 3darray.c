/* Program name: 3darray.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Working with 3d array*/

# include <stdio.h>
main()
{
 int k,i,j	;
 int a[2][3][3]={ 
                  {
				   {1,2,3},
                   {1,2,3},
                   {1,2,3}
				  },
				  {
				   {5,6,7},
                   {3,4,8},
                   {5,9,1}
				  },
                 };


 for(k=0;k<2;k++)
 {
 	for(i=0;i<3;i++)
 	{
	 	for(j=0;j<3;j++)
	 	{
	 		printf("%d\t",a[k][i][j]);
	 	}
	 	printf("\n");
	 }
	 printf("\n------------------\n");
 }
 printf("\n");
}
