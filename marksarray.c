/* Program name: marksarray.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read Marks of N Subjects, display total & average*/

# include <stdio.h>
main()
{
 int m[100],size,i,tot;
 float avg;
 tot=avg=0;
 
 printf("Enter How Many Subjects you Want to Enter(Maximum Subjects - 100)...:");
 scanf("%d",&size);
 
 if(size>100)
 {
 	printf("Invalid Number of Subjects...");
 	exit(0);
 }
 
 for(i=0;i<size;i++)
 {
 	printf("Enter Marks of Subject %d : ",i+1);
 	scanf("%d",&m[i]);
 }
 
 for(i=0;i<size;i++)
 {
 	tot=tot+m[i];
 }
 
 avg=(float)tot/size;
 
 printf("\n\n");
 for(i=0;i<size;i++)
 {
 	if(i<(size-1))
 	  printf("%d+",m[i]);
 	else
	  printf("%d=",m[i]); 
 } 
 printf("%d",tot);
 
 printf("\n\nTotal is:%d",tot);
 printf("\nAverage is:%f",avg);
 
     	
  printf("\n");
}
