/* Program name: fgets.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read contents from a file
*/

# include <stdio.h>
# define SIZE 200
main()
{
  FILE *fp;
  char str[SIZE];
  
  fp=fopen("address.txt","r");
  
  if(fp==NULL)
  {
  	printf("File is Missing...");
  	exit(0);
  }
  
  printf("For more details contact us...");
  printf("\n----------------------------\n");
  while(1)
  {
  	if(feof(fp))
  	  break;
    else
    {
      fgets(str,SIZE,fp);
      printf("%s",str);
    }
  }
  fclose(fp);
  printf("\n");
}
