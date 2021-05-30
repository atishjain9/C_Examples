/* Program name: prime100.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to generate prime nos till 100 */
   
# include <stdio.h>
main()
{
 int no,d;
 
 for(no=1;no<=100;no++)
 {
 	//checking prime no
 	d=2;
 	while(d<no)
 	{
 		if(no%d==0)
 		  break;
 	
	 d++;	  
    }
   
   if(no<=d && no!=2)    
      printf("\t%d",no);
 }

 printf("\n");
}