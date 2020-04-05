/* Program name:area.c
   Author: Atish Jain
   Task: program to find area of circle
*/

# include <stdio.h>
main()
{
	int r;
	float a;
	const float PI=3.14;
	
	printf("Enter Radius:");
	scanf("%d",&r);
	
	a=PI*r*r;
	
	printf("Area of circle is:%f",a);
		
	printf("\n");
	
}
