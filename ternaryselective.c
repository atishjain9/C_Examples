/* Program name: ternaryselective.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on Ternary Operators */
   
# include <stdio.h>
main()
{
	/*
	//ex - 1
	int x=5,y=10,res;
	res=x<y?x:y; 
	printf("\n%d",res);

    //ex - 2	
    
    res=10>5 ? 10,20,30 : 'a', 'b','c';
    printf("\n%d",res);

*/
    //ex - 3	
    
  int x=5,y=10,res;
  
  x>y ? res = x : (res = y);
   
  printf("%d",res); 


		
  	printf("\n");
}
