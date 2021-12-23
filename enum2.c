/* Program name: enum2.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on enum */
   
# include <stdio.h>

typedef enum boolean
 { false,
   true
 }boolean;
 
main()
{
boolean evenoddcheck(int);
int no;
boolean res;

printf("Enter a no:");
scanf("%d",&no);

res=evenoddcheck(no);

if(res==true)
  printf("%d is Even...",no);
else
  printf("%d is Odd...",no);

	
printf("\n");
}

boolean evenoddcheck(int no)
{
	if(no%2==0)
	  return true;
    else
      return false;
	
}