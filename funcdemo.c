/* Program name:funcdemo.c
   Author: Atish Jain
   Task: Program to understand function flow
*/

# include <stdio.h>

main()
{
 void sayHello(void);	//func declaration
 
 printf("\nIn Main function.....");
 sayHello(); //func calling/invocation/execution
 printf("\nBack to Main Function Again....");
 sayHello();
 printf("\nBack to Main Function Again.....");
 printf("\n");
}

void sayHello(void) //function definition
{
	printf("\nI am in SayHello() Function - How Can i Help You....");
	return;
}

