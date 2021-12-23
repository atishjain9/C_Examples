/* Program name: studarrsearch.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Linear Search on array of structures*/

# include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	int age;
};
typedef struct student stud;

main()
{
 int size,i,keyno;
 char found='n';
 
 printf("Enter how many students...:");
 scanf("%d",&size);
 
 stud s[size];
 
 for(i=0;i<size;i++)
 {
 	printf("Enter Student Rollno:");
 	scanf("%d",&s[i].rollno);
 	
 	printf("Enter Student Name:");
 	fflush(stdin);
 	gets(s[i].name);
 	
 	printf("Enter Student Age:");
 	scanf("%d",&s[i].age);
 }
 
 printf("\nEnter Rollno to search...:");
 scanf("%d",&keyno);
 
 for(i=0;i<size;i++)
 {
 	if(keyno==s[i].rollno)
 	{
	 	found='y';
	 	break;
	 }
 }
 
 if(found=='n')
   printf("%d Student Rollno is Not Found",keyno);
 else
 {
 	printf("Student Details are:");
 	printf("\n------------------");
 	printf("\nStudent Rollno:%d",s[i].rollno);
 	printf("\nStudent Name:%s",s[i].name);
 	printf("\nStudent Age:%d",s[i].age);
 }
 
printf("\n");
}
