/* Program name : votingage.c
  Author: Atish Jain
   */

# include <stdio.h>
main()
{
	int age,waitingage;
	age=waitingage=0;
	printf("Enter ur Age: ");
	scanf("%d",&age);
	
	if(age>=18)
	   printf("Hey You Can Vote....");
    else
      {
       waitingage=18-age;
	   printf("Hey You have to Wait for %d more Years to Vote...",waitingage);  	
      }
	  	
 	printf("\n");
}