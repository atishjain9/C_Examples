/* Program name: dmademo1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Dynamic Memory allocation */

# include <stdio.h>
main()
{
  int n,*p,i;
  
  printf("Enter How Many Numbers you Want to Store...:");
  scanf("%d",&n);
  
  p=(int *)malloc(n*sizeof(n));
  
  if(p==NULL)
  {
  	printf("Error in Allocating Memory...");
  	exit(0);
  }
  
  for(i=0;i<n;i++)
  {
  	printf("Enter %d no...:",i+1);
  	scanf("%d",p+i);
  }
  
  printf("\nDynamic Memory allocation");
  printf("\n--------------------------");
  
  for(i=0;i<n;i++)
  {
  	printf("\n%u-%d",p+i,*(p+i));
  }
  
  int *q=realloc(p,(n+2)*sizeof(n));
 
 printf("\nRe Allocation");
 printf("\n--------------------------");
  
  for(i=0;i<n+2;i++)
  {
  	printf("\n%u-%d",p+i,*(p+i));
  }
  
  
  printf("\n");
}





