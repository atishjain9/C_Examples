/* Program name: iofunc3.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : EXample on IO Functions */
   
   # include <stdio.h>
   main()
   {
   	char ch;
   	
   	printf("Enter a character-getchar():");
   	ch=getchar();
   	printf("The Inputted Character is:%c",ch);
   	
   	
   	printf("\n\nEnter a character-getche():");
   	ch=getche();
   	printf("\nThe Inputted Character is:%c",ch);
   	
   	
   	printf("\n\nEnter a character-getch():");
   	ch=getch();
   	printf("\nThe Inputted Character is:%c",ch);
   	
   	   
     printf("\n");
   }