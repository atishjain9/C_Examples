/* Program name: gotoxydemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to work with gotoxy function*/
   
/* Program name: gotoxydemo.c */

# include <stdio.h>   
# include <windows.h>

COORD pos={0,0};

main() 
{
	
 system("color 1");
 gotoxy(32,1);
 printf("Atish Jain's C Programming Classes");
 gotoxy(32,2);
 printf("----------------------------------");	
 
 printf("\n");
}

gotoxy(int x,int y)
{
	pos.X=x;
	pos.Y=y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

