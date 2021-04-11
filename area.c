/* Program name:area.c
   Author: Atish Jain
   Task: program to find area of circle
*/

# include <stdio.h>
main()
{
	int r;
	float area;
	const float PI;
	
	printf("Enter Radius....:");
	scanf("%d",&r);
	
	
	area=PI*r*r;
	
	printf("Area of Circle is:%f",area);
	
 printf("\n");
	
}