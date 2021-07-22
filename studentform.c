/* Program name:studentform.c */
# include <stdio.h>
# include "mystr.h"
main()
{
  char sname[50],fname[50],mname[50];
  
  printf("Enter Student Name...:");
  gets(sname);
  
  printf("Enter Father's Name...:");
  gets(fname);
  
  printf("Enter Mother's Name...:");
  gets(mname);
  
  printf("\n\nStudent Registration Details in Proper case form are...:");
  printf("\n--------------------------------------------------------\n");
  
  printf("Student Name:");
  propercase(sname);
  printf("Father Name:");
  propercase(fname);
  printf("Mother Name:");
  propercase(mname);
  
  printf("\n\nNumber of Words in Student Name are:%d",wcount(sname));
  printf("\nNumber of Words in Father Name are:%d",wcount(fname));
  printf("\nNumber of Words in Mother Name are:%d",wcount(mname));

  
 printf("\n");
}

