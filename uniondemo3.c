/* Program name:uniondemo3.c
   Author: Atish Jain
   Task: Example on Structures & Unions
*/

# include <stdio.h>
# pragma pack(1)

struct person
{
	int id;
	char name[20];
	long long mno;
	
	union
	{
		float fees;
		float salary;
	}info;
}s1,e1;


main()
{
 printf("size of union variable is:%d",sizeof(s1));
 
 printf("\nEnter Student Details....");
 printf("\n------------------------");
 printf("\nEnter Student id:");
 scanf("%d",&s1.id);
 
 printf("Enter Student Name...:");
 fflush(stdin);
 gets(s1.name);
 
 printf("Enter Student Mobile no:");
 scanf("%lld",&s1.mno);
 
 printf("Enter Student Course Fees...:");
 scanf("%f",&s1.info.fees);

 printf("\nEnter Employee Details....");
 printf("\n------------------------");
 printf("\nEnter Employee id:");
 scanf("%d",&e1.id);
 
 printf("Enter EmployeeName...:");
 fflush(stdin);
 gets(e1.name);
 
 printf("Enter Employee Mobile no:");
 scanf("%lld",&e1.mno);
 
 printf("Enter Employee Salary...:");
 scanf("%f",&e1.info.salary);

 printf("\nStudent and Employee Details....");
 printf("\n--------------------------------");
 printf("\nStudent id:%d",s1.id);
 printf("\nStudent Name:%s",s1.name);
 printf("\nStudent Mobile no:%lld",s1.mno);
 printf("\nStudent Course Fees:%f",s1.info.fees);
 
 printf("\nEmployee id:%d",e1.id);
 printf("\nEmployee Name:%s",e1.name);
 printf("\nEmployee Mobile no:%lld",e1.mno);
 printf("\nEmployee Salary:%f",e1.info.salary);
 
 printf("\n");
}