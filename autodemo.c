/* Program name:autodemo.c
   Author: Atish Jain
   Task: demo on auto storage class variables
*/

# include <stdio.h>
//auto int x=10; cannot declare global variable as auto variables
main()
{
	auto int x=100; //function scope
	printf("\nX is:%d",x);
	
	if(x==100)
	{
		int y=1000;;
		int x;
		
		printf("\nx is:%d",x);
		printf("\ny is:%d",y); //accessed with the block where it is declared
	}
	
  	printf("\nx is:%d",x);
  	//printf("\ny is:%d",y);

 
 printf("\n");
}


