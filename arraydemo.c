/* Program name: arraydemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Working with Array declaration and initialization*/

# include <stdio.h>
main()
{
  int i;
  int arr[10]={};
  
  arr[0]=90;
  arr[5]=999;
  arr[9]=555;
  
  
  for(i=0;i<10;i++)
    printf("\n%d - %d",i,arr[i]);
  
  printf("\n");
}
