/* Program name: Discount.c
   Author: Atish Jain
   Task: Calcualte Discount and Final amount
*/

# include <stdio.h>
main()
{
 int sales,dis,famt;
 sales=dis=famt=0;
 
 printf("Enter Sales Amount....:");
 scanf("%d",&sales);
 
 if(sales>=25000)
    dis=sales*10/100;
 else
    dis=sales*5/100;
    
 famt=sales-dis;
 
 printf("\nDiscount is:%d",dis);
 printf("\nFinal Amount is:%d",famt);   


	printf("\n");
}