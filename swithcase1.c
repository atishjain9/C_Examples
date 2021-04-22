/* Program name: switchcase1.c
   Author: Atish Jain
   Task: switch-case example
*/

# include <stdio.h>
main()
{
  int no=0;
  
  printf("Enter a no(1-9):");
  scanf("%d",&no);
  
  if(no>=1 && no<=9)
    printf("\nHeyy! You Have Entered...: ");
  
  switch(no)
  {
  	case 1: printf("One..."); break;
  	case 2: printf("Two..."); break;
  	case 3: printf("Three..."); break;
  	case 4: printf("Four..."); break;
  	case 5: printf("Five..."); break;
  	case 6: printf("Six..."); break;
  	case 7: printf("Seven..."); break;
  	case 8: printf("Eight..."); break;
  	case 9: printf("Nine..."); break;
  	default: printf("Please Enter Numbers In-Between 1-9 only...."); break;
  }
  
	
	printf("\n");
}