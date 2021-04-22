/* Program name:bonusex.c
   Author: Atish Jain
   Task: checking the eligibility of bonus based on different conditions
*/

# include <stdio.h>
main()
{
 char ms,gen;
 int age=0;
 
 printf("Enter Marital Status - ([m]arried/[u]nmarried):");
 scanf("%c",&ms);
 
 if(ms=='m' || ms=='M')
   printf("Eligible for Bonus....");
 else
    if(ms=='u' || ms=='U')
     {
      printf("Enter ur Gender([m]ale/[f]emale):");
	  fflush(stdin);
	  scanf("%c",&gen);
	  printf("Enter ur Age...:");
	  scanf("%d",&age);
	
 	  if(gen=='m' || gen=='M')
	    if(age>=30)
	      printf("Eligible for Bonus...");
	    else
	      printf("Not Eligible for Bonus....");
     else
	    if(gen=='f' || gen=='F')
	       if(age>=25)
	 	    printf("Eligible for Bonus...");
		  else
		    printf("Not Eligible for Bonus...");		 	 	
    else
        printf("Invalid Gender inputted...");
   }
 else
   printf("Invalid Marital status inputted...");
 
 printf("\n");
}