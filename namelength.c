/* Program name:namelength.c
   Author: Atish Jain
   Task: Program to Read a name and Print Length no of times
*/

# include <stdio.h>
# include <string.h>
main()
{
  char name[50];
  int len,count=1;
  
  printf("Enter ur Name....:");
  scanf("%s",&name);
  
  len=strlen(name);
  
  while(count<=len)
  {
   printf("\n%d. %s",count,name);
   count++;	
  }
  
  printf("\n");
}





