/* Program name: studdoj.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Nested Structures*/

# include <stdio.h>

struct date
{
	int dd,mm,yy;
};
typedef struct date date;

typedef struct student
{
	int id;
	char name[20];
	date doj;
	int age;
}student;
main()
{
	student s1;
	
	printf("Enter Student id:");
	scanf("%d",&s1.id);
	printf("Enter Student Name...:");
	fflush(stdin);
	gets(s1.name);
	printf("Enter Student Date of Joining(dd/mm/yy):");
	scanf("%d%d%d",&s1.doj.dd,&s1.doj.mm,&s1.doj.yy);
	printf("Enter Student Age...:");
	scanf("%d",&s1.age);
	
	printf("Student Details...:");
	printf("\nid - Name - Age - Date of Join");
	printf("\n%d - %s - %d - %d/%d/%d",s1.id,s1.name,s1.age,s1.doj.dd,s1.doj.mm,s1.doj.yy);
	
	
printf("\n");
}
