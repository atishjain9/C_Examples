/* Program name: filesrandom.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to Work with random access functions*/

#include <stdio.h>

int main()
{
 FILE *fp;
 char ch;
 
 fp=fopen("sample.txt","rt");
 
 if(fp==NULL)
 {
 	printf("File is not Existing....");
 	exit(0);
 }
 
 printf("\nFirst Time Reading data from sample.txt file\n");
 
 while ( (ch=getc(fp))!=EOF )
    putchar(ch);
 

//fclose(fp); fp=fopen("sample.txt","r");
rewind(fp); //sets the cursor/pointer to the beginning of the file

printf("\n\nSecond Time Reading data from sample.txt file\n");
 
 while ( (ch=getc(fp))!=EOF )
    putchar(ch);

fseek(fp,0,SEEK_SET); //sets the cursor/pointer to the 1st location from the beginning
ch=getc(fp);
printf("\n\nCharacter at location %d is %c",ftell(fp),ch);

ch=getc(fp);
printf("\nCharacter at location %d is %c",ftell(fp),ch);


fseek(fp,2,SEEK_CUR); //sets the cursor/pointer to the 2nd location from the current location
ch=getc(fp);
printf("\nCharacter at location %d is %c",ftell(fp),ch);


fseek(fp,-1,SEEK_END); //sets the cursor/pointer to the 2nd location from the current location
ch=getc(fp);
printf("\nCharacter at location %d is %c",ftell(fp),ch);



   
 printf("\n\n");
}