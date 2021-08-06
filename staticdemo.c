/* Program name:staticdemo.c
   Author: Atish Jain
   Task: demo on static varaibles
*/

# include <stdio.h>

static int g;
main()
{
 static int i;
 static float f;
 static char c;
 static char str[100];
 
 printf("%d - %f - %c - %s",i,f,c,str);
 printf("\nDefault value of static global varaible is:%d",g);
 printf("\n");
}



