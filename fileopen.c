/* Program name: fileopen.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with file opening and closing functions */

# include <stdio.h>
main()
{
	FILE *ptr;
	
	ptr=fopen("hello.txt","at");
	
	printf("\nAddress of the file pointer is:%u",ptr);
	
	if(ptr!=NULL)
	  printf("\nFile is Open...");
    else
      printf("\nFile is Existing...");
	
	
  fclose(ptr);	
  printf("\n");
}