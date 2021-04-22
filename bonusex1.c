/* Program name:bonusex1.c
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
 printf("Enter ur Gender([m]ale/[f]emale):");
 fflush(stdin);
 scanf("%c",&gen);
 printf("Enter ur Age...:");
 scanf("%d",&age);
	

if((ms=='M'||ms=='m') || ((gen=='m'||gen=='M')&&age>=30) ||( (gen=='F'||gen=='f')&&age>=25)) 
    printf("Eligible for Bonus...");
else
   printf("Not Eligible for Bonus...");
   
 printf("\n");
}