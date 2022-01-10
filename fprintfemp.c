/* Program name: fprintfemp.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read and write structure variable using fprintf() and fscanf()*/

#include <stdio.h>
#include <stdlib.h>
main()
{
 typedef struct employee
 {
 	int empid;
 	char ename[20];
 	float salary;
 }emp;

 emp e;
 FILE *fp;
 char ch='y';
 
 fp=fopen("empfile.txt","a+"); //opens the file  in append mode and allows reading
 
 while(ch=='y' || ch=='Y')
 {
 	printf("\nEnter Employee id:");
 	scanf("%d",&e.empid);
 	
 	printf("Enter Employee name:");
    fflush(stdin);	
    scanf("%s",e.ename);
    
    printf("Enter Employee Salary:");
    scanf("%f",&e.salary);
    
    fprintf(fp,"%d\t%s\t%.2f\n",e.empid,e.ename,e.salary);
    
    printf("Do you Want to Add one more Record...(y/n):");
    fflush(stdin);
    ch=getche();
  }
  
  printf("\nEmployee Record is Successfully Written to the File");
  
  
  rewind(fp); //sets the record pointer to the beginning of the file
  
  system("cls");
  printf("\nReading Data from Employee File");
  printf("\n-------------------------------");
  printf("\nEmployee ID\tEmployee Name\tSalary");
  printf("\n----------------------------------");
  
  while(1)
  {
  	fscanf(fp,"%d%s%f",&e.empid,&e.ename,&e.salary);
  	
  	if(feof(fp))
  	  break;
  	  
    printf("\n%d\t\t %s\t\t%.2f",e.empid,e.ename,e.salary); //writing on the console
  }
  
  printf("\nThank you");
 
 printf("\n");
}
