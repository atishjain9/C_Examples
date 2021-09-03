/* Program name: dmademo2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Dynamic Memory allocation */

# include <stdio.h>
# include <stdlib.h>

main()
{
  int *p,n,i;
  
  printf("Enter how many Elements you want to store:");
  scanf("%d",&n);
  
  p=(int *)calloc(n,sizeof(n));
  
  if(p==NULL)
  {
  	printf("Memory Allocation Error...");
  	exit(0);
  }
  
  
  for(i=0;i<n;i++)
  {
  	printf("Enter %d no..:",i+1);
  	scanf("%d",p+i);
  }
  
  p=(int *)realloc(p,(n+2)*sizeof(n));
  
  printf("\nMemory Allocation usinig calloc and realloc:");
  printf("\n--------------------------------------------");
  for(i=0;i<n+2;i++)
  {
  	printf("\n%u - %d",p+i,*(p+i));
  }
  
  free(p);
  p=NULL;

  if(p==NULL)
  {
  	printf("\nMemory is Released....");
  }
  
  printf("\n");
}
