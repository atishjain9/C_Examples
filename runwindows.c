/* Program name: runwindows.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : run windows applications using system() function */

   # include <stdio.h>
   main()
   {
   	 char opt;
   	 printf("Enter Which Application to Run.....");
   	 printf("\n[N]otepad - [P]aint - [C]alculator : ");
   	 scanf("%c",&opt);
   	 
   	 switch(opt)
   	 {
 	   	case 'N':
 	   	case 'n': system("notepad"); break;
 	   	case 'P':
 	   	case 'p': system("mspaint"); break;
 	   	case 'C':
 	   	case 'c': system("calc"); break;
 	   	default: printf("Invalid input....");break;
   }
   
   printf("\n");
   }

