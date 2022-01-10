/* Program name: fileread.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read contents from a file*/
# include <stdio.h>
main()
{
 FILE *fp;
 char ch,fname[10];
 
 printf("Enter file name:");
 scanf("%s",&fname);
 
 fp=fopen(fname,"r");
 
 if(fp==NULL)
 {
 	printf("%s - File is not is Existing...\n",fname);
 	exit(0);
 }
 
 while(1)
 {
 	ch=getc(fp);
 	
 	if(ch==EOF)
 	   break;
    else
       putchar(ch);
 }
 	
 printf("\n");
}