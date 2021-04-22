/* Program name: switchcasefall.c
   Author: Atish Jain
   Task: switch-case fall through example
*/

# include <stdio.h>
main()
{
 char color;
 
 printf("Enter ur Color Code(R/G/B):");
 scanf("%c",&color);
 
 switch(color)
 {
 	case 'R':
 	case 'r':printf("Red..."); break;
 	case 'G':
 	case 'g':printf("Green..."); break;
 	case 'B':
 	case 'b':printf("Blue..."); break;
 	
 	default: printf("Enter R/G/B only..."); break;
	  
 }
		
	printf("\n");
}