/* Program name: ternarybig2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Ternary Operators */
   
# include <stdio.h>
main()
{
	int a,b;
	printf("Enter two nos...:");
	scanf("%d%d",&a,&b);
	
	(a>b ? printf("%d is big..",a):printf("%d is big..",b));
		
  	printf("\n");
}
