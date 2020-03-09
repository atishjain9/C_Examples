/* Program name: swap2.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Swapping to two nos */


# include <stdio.h>
main()
{
	int a,b;
	a=b=0;
	
	printf("Enter value for A:");
	scanf("%d",&a);
	
	printf("Enter value for B:");
	scanf("%d",&b);
	
// logic - 1

/*	temp=a;
	a=b;
	b=temp;
*/
	

//Logic - 2
/*	a=a+b;
	b=a-b;
	a=a-b;
*/

//logic -3

    a=a*b;
 	b=a/b;
  	a=a/b;
	
	printf("\nA is:%d",a);
	printf("\nB is:%d",b);
	
	printf("\n");
}
