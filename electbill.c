/* Program name:electbill.c
   Author: Atish Jain
   Task: Program electricty bill
*/

# include <stdio.h>
main()
{
  int lmr,pmr,uc;
  float bill;
  const float RATE=3.75;
  
  printf("Enter Last month reading:");
  scanf("%d",&lmr);
  
  printf("Enter Present month reading:");
  scanf("%d",&pmr);
  
  uc=pmr-lmr;
  
  bill=uc*RATE;
  
  printf("\nUnits Consumed:%d",uc);
  printf("\nBill Amount is:%.2f",bill);
  printf("\n");
}
