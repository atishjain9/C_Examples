/* Program name: mainmenu.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Calculator Example using Menu */

# include <stdio.h>
void main()
{
 int a,b,c,opt;
 a=b=c=opt=0;
 
 printf("\nMain - Menu");
 printf("\n~~~~~~~~~~~~");
 printf("\n1.Addition");
 printf("\n2.Subtraction");
 printf("\n3.Multiplication");
 printf("\n4.Division");
 printf("\n5.Exit");
 
 printf("\n\nEnter First no....:");
 scanf("%d",&a);
 
 printf("Enter Second no...:");
 scanf("%d",&b);
 
 
 printf("\n\nEnter ur Option(1-5):");
 scanf("%d",&opt);
 
 
  if(opt==1)
    c=a+b;
  else
      if(opt==2)
	     c=a-b;
	  else
	      if(opt==3)
		    c=a*b;
		  else
		     if(opt==4)
			   c=a/b;
			 else
			     if(opt==5)
				    exit(0);
				 else
				     printf("Invalid Option Entered....");
					 
  if(opt>=1 && opt<=5)
     printf("\nResult is:%d",c);
   	  		   
  printf("\n");
}





