/* Program name: strdemo1.c
  Author: Atish Jain
  IDE: C-Free 5.0
  Task: Program to read a string with spaces and display the same */

# include <stdio.h>
main()
{
 char name[100];
 
 printf("Enter ur Name..:");
 scanf("%[^\n]",&name);
 
 printf("Heyyy %s, How are you....",name);
printf("\n");
}