/* Program name: colorful.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : program to change foreground and background colors */

   # include <stdio.h>
   main()
   {
   	system("color 1");
   	printf("Welcome to Colorful output...");
   	printf("\nPress any key to Change colors...");
   	getch();
   	system("color f4");
   	
   	system("cls");
   	printf("Welcome to Colorful output...");   	
   	printf("\nPress any key to Change colors...");
   	getch();
   	system("color f2");

   	
   	printf("\n");
   }

