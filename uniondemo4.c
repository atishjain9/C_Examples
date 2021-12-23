/* Program name:uniondemo4.c
   Author: Atish Jain
   Task: Example on nested Structures & Unions
*/

# include <stdio.h>

struct student
{
	int rollno;
	char name[20];
	int m;
	union
	{
	 struct
	 {
	  int p,c;	
     }mpc;
	 struct
	 {
	  int e,c;	
	 }mec;
	}marks;
}s1,s2;
main()
{
 printf("\nSize of student structure variable s1 is:%d",sizeof(s1));
 
 printf("\nEnter Science Student Details...:");
 printf("\nRollno:");
 scanf("%d",&s1.rollno);
 printf("Name:");
 fflush(stdin);
 gets(s1.name);
 printf("Maths:");
 scanf("%d",&s1.m);
 printf("Physics:");
 scanf("%d",&s1.marks.mpc.p);
 printf("Chemistry:");
 scanf("%d",&s1.marks.mpc.c);
 
 printf("\nEnter Commerce Student Details...:");
 printf("\nRollno:");
 scanf("%d",&s2.rollno);
 printf("Name:");
 fflush(stdin);
 gets(s2.name);
 printf("Maths:");
 scanf("%d",&s2.m);
 printf("Economics:");
 scanf("%d",&s2.marks.mec.e);
 printf("Commerce:");
 scanf("%d",&s2.marks.mec.c);
 
 
 printf("\nScience Student Details:");
 printf("\n------------------------");
 printf("\nRollno:%d",s1.rollno);
 printf("\nName:%s",s1.name);
 printf("\nMaths:%d",s1.m);
 printf("\nPhysics:%d",s1.marks.mpc.p);
 printf("\nChemistry:%d",s1.marks.mpc.c);

 printf("\n\nCommerce Student Details:");
 printf("\n---------------------------");
 printf("\nRollno:%d",s2.rollno);
 printf("\nName:%s",s2.name);
 printf("\nMaths:%d",s2.m);
 printf("\nEconomics:%d",s2.marks.mec.e);
 printf("\nCommerce:%d",s2.marks.mec.c);

 printf("\n");
}