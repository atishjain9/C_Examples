/* Program name: chararray1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to declare & initialize character array*/

# include <stdio.h>
main()
{
	//method 1
	char name1[50]={'A','t','i','s','h','\0'};
	char name2[]={'A','t','i','s','h','\0'};
	
	printf("\nname1 is:%s",name1);
	printf("\nname2 is:%s",name2);
	
	//method 2
	
	char name3[50]="Atish";
	char name4[]="Atish";
	
	printf("\nname3 is:%s",name3);
	printf("\nname4 is:%s",name4);
	
	
    printf("\n");
}

