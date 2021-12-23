/* Program name: paddingandpackingdemo.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Example on padding and packing */

# include <stdio.h>
# pragma pack(1)

main()
{
 struct sample
 {
 	int b;
 	char c;
 	char a;
 	char x;
 	char y;

 }s;
 
 
 printf("\nsize of s is:%d",sizeof(s));

   
 printf("\n");
}


