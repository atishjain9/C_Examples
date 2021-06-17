/* Program name: marksarray1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read Marks of N Subjects, display total & average*/

# include <stdio.h>
main()
{
 int size,i,tot;
 float avg;
 tot=avg=0;
 
 printf("Enter How Many Subjects you Want to input...:");
 scanf("%d",&size);
 
 int m[size]; //declaring array at runtime
 
 
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
 	printf("%d+",m[i]);
 } 
 
 printf("\b=%d",tot);
 
 printf("\n\nTotal is:%d",tot);
 printf("\nAverage is:%.2f",avg);
 
     	
  printf("\n");
}
