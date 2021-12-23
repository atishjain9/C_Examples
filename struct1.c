/* Program name: struct1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Reading user input*/

# include <stdio.h>

main()
{
  //structure definition
  struct student
  {
  	int rollno;
  	char name[20];
  	float avg;
  }s1;  //declaring structure variable at the time of structure definition
  
  //declaring structure variable after structure definition
  struct student s2={101,"Prem",99};
  
  printf("Enter Rollno...:");
  scanf("%d",&s1.rollno);
  
  printf("Enter Name:");
  fflush(stdin);
  gets(s1.name);
  
  printf("Enter Average marks...:");
  scanf("%f",&s1.avg);
  
  
  printf("\n\nStudent Details....");
  printf("\n--------------------");
  printf("\nStudent Rollno:%d",s1.rollno);
  printf("\nStudent Name:%s",s1.name);
  printf("\nStudent Average Marks:%f",s1.avg);

  printf("\n\nStudent Rollno:%d",s2.rollno);
  printf("\nStudent Name:%s",s2.name);
  printf("\nStudent Average Marks:%f",s2.avg);

  printf("\n");
}

