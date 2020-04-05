/* Program Name: coutput.c
   Author : Atish Jain
   Task: to work with gotoxy(), textcolor(), cprintf() and cscanf() 
  IDE : Turbo C */

# include <stdio.h>
# include <conio.h>
main()
{
 int x=0;
 clrscr();
 gotoxy(30,1);
 textcolor(1);
 cprintf("Enter a no:");
 textcolor(2);
 cscanf("%d",&x);

 gotoxy(30,3);
 textcolor(RED);
 cprintf("The no is:%d",x);


getch();
getch();
}
