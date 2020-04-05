/* Program name:rupees.c
   Author: Atish Jain
   Task: Program convert inputed rupees into paise
*/

# include <stdio.h>
main()
{
	int rs,res;
	const int PS=100;
	
	PS=120;
	printf("Enter Rupees:");
	scanf("%d",&rs);
	
	res=rs*PS;
	  
    printf("%d Rupees is equal %d Paise",rs,res);
  printf("\n");
}
