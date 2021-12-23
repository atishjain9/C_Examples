/* Program name:uniondemo2.c
   Author: Atish Jain
   Task: Example on Unions
*/

# include <stdio.h>
# pragma pack(1)

union idproof
{
	long long aadhar;
	char ppno[10];
	char panno[15];
}id;


main()
{
 printf("\nsize of Union variable id is:%d",sizeof(id));
 
 int idp=0;
 
 printf("\nEnter Which Id Proof You Want to Submit(1-Aadhar,2-Passport,3-Panno):");
 scanf("%d",&idp);
 
 switch(idp)
 {
 	case 1:{
 		    printf("Enter ur 12 Digit Aadhar no...:");
 		    scanf("%d",&id.aadhar);
	       }break;
 	case 2:{
 		    printf("Enter ur Passport no...:");
 		    fflush(stdin);
 		    gets(id.ppno);
	       }break;
 	case 3:{
 		    printf("Enter ur 12 Digit Aadhar no...:");
 		    fflush(stdin);
 		    gets(id.panno);
	       }break;
    default: printf("Invalid Choice..."); break;
 }
 
 if(idp==1)
   printf("Hi, Your Aadhar no is Accepted, Our Team will Contact you soon....");
 else
     if(idp==2)
   	     printf("Hi, Your Passport no is Accepted, Our Team will Contact you soon....");  
     else
         if(idp==3)
           printf("Hi, Your Pan no is Accepted, Our Team will Contact you soon....");
           
 printf("\n");
}