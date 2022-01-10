/* Program name: filecreate.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to create a text file and perform write operation*/
# include <stdio.h>
main()
{
 FILE *fp;
 char ch,fname[10];
 
 printf("Enter File Name(Should not exceed more than 10 characters):");
 scanf("%s",&fname);
 
 fp=fopen(fname,"rt");
 
 if(fp!=NULL)
 {
 	printf("\nFile is Already Existing....");
 	getch();
 	exit(0);
 }
 
 fp=fopen(fname,"wt");
 
 printf("Enter File Contents(f6 to Save):\n");
 while(1)
 {
 	ch=getchar();
 	if(ch==EOF)
 	   break;
    else
       putc(ch,fp);
 }
 
 printf("\n1 File is Created...");
 
 fclose(fp); 	
 printf("\n");
}