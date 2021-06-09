/* Program name: textpat4.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Print Patterns using Alphabets   */

# include <stdio.h>
main()
{
 int i,j,tar;
 char ch1,ch2;
 ch1='A';
 
 printf("Enter ur Target Alphabet...(A-Z):");
 scanf("%c",&ch2);
 
 if(!((ch2>=65 && ch2<=90) ||(ch2>=97 && ch2<=122)))
 {
 	printf("Invalid Input...");
 	exit(0);
 }
 
 ch2=toupper(ch2);
     
         
 tar=ch2-ch1;
 tar=tar+1;
 
 for(i=1;i<=tar;i++)
 {
 	ch1='A';
 	for(j=1;j<=i;j++)
 	{
	 	printf("%c ",ch1++);
	 }
	 printf("\n");
 }
 
 
 printf("\n");
}

