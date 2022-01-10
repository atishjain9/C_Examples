/* Program name: fputs.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to write contents to a file
*/
#include <stdio.h>
main()
{
	FILE *fp;
	char str[100];
	
	fp=fopen("biodata.txt","w");
	
	printf("Heyy In Introduce ur self...\n");
    gets(str);
	fputs(str,fp);
	
	fputs("\nI teach C,CPP,Java annd Python to Engineering students\n",fp);
	fputs("Conect me for online classes - 9949128444",fp);
	
	fclose(fp);
	printf("\nbiodata is written to the file - Open it using notepad...");
    printf("\n");
}
