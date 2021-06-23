/* Program name: 2darray.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to declare & initialize 2d array*/

# include <stdio.h>
main()
{
  int i,j;
  
  //method 1	
  //int a[3][4];
  
  //method 2
  //int a[3][4]={};
    
  //method 3
  //int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
  //method 4
  /*int a[3][4]={ 
                {1,2,3,4},
				{5,6,7,8},
				{9,1,5,6}
               };
  */

  //method 5
  //int a[][4]={1,2,3,4,5,6,7,8,9};
  
  //method 6
  /*int a[3][4]={ 
                {1,2},
				{5},
				{9,1,5}
               };
   */            

  //method 7
  int a[3][4]={};
  a[0][0]=999;
  a[2][2]=555;
  a[2][3]=111;               
  
  
  //diplaying

for(i=0;i<3;i++)
{
  for(j=0;j<4;j++)
  {
    printf("%d\t",a[i][j]);
  }
  printf("\n\n");
}
   
  
  
  
  printf("\n\n"); 
}
  
 

 
