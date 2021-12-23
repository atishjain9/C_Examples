/* Program name: starrfuncptr.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Arry of Structure and function with pointers*/

# include <stdio.h>

struct employee{
	int id;
	char name[20];
	float salary;
};
typedef struct employee emp;
int i,size;

main()
{
 void display(emp*);
 
 printf("Enter How Many Employees:");
 scanf("%d",&size);
 
 if(size<=0)
 {
 	printf("Invalid Size....");
 	exit(0);
 }
 
 emp e[size];
 
 printf("\nReading Information of %d Employees...",size);
 printf("\n------------------------------------------\n");
 for(i=0;i<size;i++)
 {
 	printf("Enter Employee id:");
 	scanf("%d",&e[i].id);
 	printf("Enter Employee Name:");
 	fflush(stdin);
 	gets(e[i].name);
 	printf("Enter Employee Salary:");
 	scanf("%f",&e[i].salary);
 }
 

  display(e);

  printf("\n");
}

void display(emp *x)
{
	printf("\n\nEmployee Information");
	printf("\n************************\n");
	printf("Address\t  id\tName\tSalary");
	
	for(i=0;i<size;i++)
	{
	 printf("\n%u - %d - %s - %f",x+i,(x+i)->id,(x+i)->name,(x+i)->salary);	
	 //x++; // moves the pointer to the next address
	}
}
