/* Program name: funcptr4.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : functions returning morethan one value using pointers */

#include <stdio.h>
main()
{
 float* calctotavg(int,int,int);
 float *res;
 
 res=calctotavg(75,86,77);
 
 printf("\nTotal is:%f",*(res+0));
 printf("\nAverage is:%f",*(res+1));
 
 printf("\n"); 
}

float* calctotavg(int m,int p,int c)
{
	float *res;
	res=(float*)malloc(sizeof(float)*2);
	float tot=m+p+c;
	*(res+0)=tot;
	*(res+1)=tot/3.0;
	
	return res;
}




