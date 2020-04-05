/* Program name: errors.c
   Author: Atish Jain
   Task:
*/

# include <stdio.h>
main()
{
	int no,d,res;
	
	printf("Enter a no:");
	scanf("%d",&no);
	
	printf("Enter divider:");
	scanf("%d",&d);
	
	res=no/d;
	
	printf("The Result is:%d",res);
	printf("\n");
}
