/* Program name:exitdemo.c
   Author: Atish Jain
   Task: Program to Work with exit(0) and exit(1)
*/

# include <stdio.h>

main()
{
  int arr[10],i,key;
  
  srand(time(0));
  for(i=0;i<10;i++)
  {
  	arr[i]=rand()%10;
  }
  
  printf("Elements of the Array are...:");
  printf("\n-------------------------------\n");
  
  for(i=0;i<10;i++)
    {
    	printf("\t%d",arr[i]);
    }
    
  printf("\n\nEnter key valule to search...:");
  scanf("%d",&key);
  
  for(i=0;i<10;i++)
  {
  	if(arr[i]==0)
  	  {
  	  	printf("\nAbnormal Termination of the Program");
  	  	exit(1);
  	  }
  	
	 if(arr[i]==key)
	 {
 	  printf("\n%d is Found at %d location....",key,i);
 	  printf("\nSuccessful Termination...");
	  exit(0);	
 	 }  
  }
  printf("\nNatural Termination the Program....");  
  printf("\n");
}

