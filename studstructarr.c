/* Program name: studstructarr.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read information of N Students*/

# include <stdio.h>
main()
{
 struct student
 {
 	int no;
 	char name[20];
 	float avg;
 }s[100];
 
 int i,size;
 
 printf("Enter How Many Students....(Max-100):");
 scanf("%d",&size);
 
 if(!(size>=1 && size<=100))
 {
  printf("Invalid size...");
  exit(0);	
 }
 
 for(i=0;i<size;i++)
 {
 	printf("\nEnter Student Rollno...:");
 	scanf("%d",&s[i].no);
 	printf("Enter Student Name...:");
 	fflush(stdin);
 	gets(s[i].name);
 	printf("Enter Average Marks...:");
 	scanf("%f",&s[i].avg);
 }
 
 printf("\n\nStudent Details are...");
 printf("\n------------------------------------------");
 printf("\nRoll no \t\t Name \t\t  Average");
 printf("\n------------------------------------------");
 for(i=0;i<size;i++)
 {
 	printf("\n%10d - %20s - %10.2f",s[i].no,s[i].name,s[i].avg);
 }
printf("\n");
}
