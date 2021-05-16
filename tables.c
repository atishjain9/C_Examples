/* Program name: tables.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Table for inputted number till 12 */
   
   # include <stdio.h>
   main()
   {
   	int tno,c,res;
   	tno=res=0;
   	
   	printf("Enter Table no....:");
   	scanf("%d",&tno);
   	
   	for(c=1;c<=20;c++)
   	{
	  res=tno*c;
	  printf("\n%d * %d = %d",tno,c,res);
	}
   	
   	  printf("\n");
   }