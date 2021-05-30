/* Program name: eocount.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to read numbers from the user till the user inputs 0 or -ve no
          and count no of even nos and nos and their sum */
   
# include <stdio.h>
main()
{
 int no,ec,oc,esum,osum;
 no=ec=oc=esum=osum=0;
 
 while(1)
 {
 	printf("Enter a no(0 or -ve No to Stop...):");
 	scanf("%d",&no);
 	
 	if(no<=0)
 	{
	 	break;
	 }
    
    if(no%2==0)
    {
    	ec++;
    	esum=esum+no;
    }
    else
       {
       	oc++;
       	osum=osum+no;
       }
 }
 
 printf("\nTotal Even Numbers are %d and their Sum is:%d",ec,esum);
 printf("\nTotal Odd Numbers are %d and their Sum is:%d",oc,osum);

 printf("\n");
}
