/* Program name:ahdmobiles.c
   Author: Atish Jain
   Task: AH Digitals Example
*/

# include <stdio.h>
main()
{
 int cost,days,dis,ext,finalamt;
 char mode;
 cost=days=dis=ext=finalamt=0;
 
 printf("Enter Cost of the Mobile:");
 scanf("%d",&cost);
 
 printf("Are You Paying Cash(y/n):");
 fflush(stdin);
 scanf("%c",&mode);
 
 if(mode=='y' || mode=='Y')
   {
   	dis=cost*25/100;
   	finalamt=cost-dis;
   }
 else
     if(mode=='n' || mode=='N')
      {
      	printf("In How Many Days Will you Pay....:");
      	scanf("%d",&days);
      	
      	 if(days<7)
      	  {
  	      	dis=cost*15/100;
  	      	finalamt=cost-dis;
  	      }
  	      else
  	       {
       	    ext=cost*10/100;
			finalamt=cost+ext;	
       	   }
      }
      else
         printf("\nInvalid Mode Entered....");

if(mode=='y' || mode=='Y' || mode=='N' || mode=='n')
{
if(dis>0)
  printf("\nDiscount is:%d",dis);
else
  printf("\nExtra is:%d",ext);

printf("\nFinal Amount is:%d",finalamt);
}

printf("\n");
}