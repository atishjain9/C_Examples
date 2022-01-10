/* Program name: fprintfstud.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with fprintf() and fscanf() */

#include <stdio.h>  
main()  
{
 FILE *fp;
 int rollno;
 char name[20];
 float avg;
 
 fp=fopen("student.txt","a+");
 
 printf("Enter Rollno:");
 scanf("%d",&rollno);
 printf("Enter Name:");
 scanf("%s",&name);
 printf("Enter Average Marks:");
 scanf("%f",&avg);
 
 fprintf(fp,"Rollno=%d\n",rollno);
 fprintf(fp,"Name=%s\n",name);
 fprintf(fp,"Average=%.2f\n",avg);
 
 printf("\nStudent Data is Writeen to the File");
 
 
 rewind(fp); // sets the file pointer at the beginning of the file
 
 char buff[200];
 
 printf("\n\nStudent Data from Student.txt File");
 printf("\n------------------------------------");
 while ( fscanf(fp,"%s",buff)!=EOF)
 {
 	printf("\n%s",buff);
 }

 fclose(fp);
 printf("\n");
 } 

  
