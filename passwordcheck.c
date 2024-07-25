//program to check the simalirity of a pass word
#include <stdio.h>

main()
{
    char pwd1[100],pwd2[100];
    int i,j,len1,len2;
    char flag='y';


    printf("Enter Password : ");
    scanf("%s",&pwd1);
    printf("\nRe-Enter Password : ");
    scanf("%s",&pwd2);

    len1=strlen(pwd1);
    len2=strlen(pwd2);

    //loading program
     long int a,b,c;
    printf("\nLoading");

    for(b=0;b<=6;b++)
    {
        for(c=0;c<100000000;c++);

        printf(".");
    }

    if(len1!=len2)
    {
        printf("\n\nBoth Password's Lengths Are Not Equal,it Cant Be Similar..... ");
        flag='n';
    }

    else
    {
        printf("\n\nLength Are Equal, Checking for Similarity  ");

    long int a,b,c;
    printf("\n\nLoading");

    for(b=0;b<=6;b++)
    {
        for(c=0;c<100000000;c++);
        printf(".");
    }

    for(i=0;pwd1[i]!='\0';i++)
    {
        if(pwd1[i]!=pwd2[i])
        {
                printf("\nPassword Are Not Similar");
                flag='n';
                break;
        }
    }
    }
   if(flag=='y')
      printf("\nPasswords Are Similar...\n\n");
   printf("\n\n");
}