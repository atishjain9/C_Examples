/* Program name:staticdemo.c
   Author: Atish Jain
   Task: demo on static varaibles
*/

# include <stdio.h>
main()
{

 display();
 display();
 display();
 
//printf("static a is:%d",a);
// printf("auto i is:%d",i); 
 
 printf("\n");
}

display()
{
	static int a=10;
	auto int i=10;
	printf("\nstatic a and auto i are =%d - %d",a++, i++);

}



