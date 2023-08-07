# include <stdio.h>
void main()
{
    char fname[10],ch,opt='n';
    FILE *fp;

    printf("Enter file name:");
    scanf("%s",&fname);

    fp=fopen(fname,"rt");

    if(fp!=NULL)
    {
        printf("File is Already Exisiting....");
        printf("\nDo Wish to Override....:(y/n):");
        fflush(stdin);
        opt=getchar();
        if(opt=='y')
            fp=fopen(fname,"wt");
       else
             if(opt=='n')
                  exit(0);
             else
             {
                 printf("Invalid Input...Program Exiting...");
                 exit(0);
             }
    }
    else
        fp=fopen(fname,"wt");

         printf("\nFile is Created, Please Input the Data(f6 or ctrl+z to save the file):\n");

  while(1)
  {
    ch=getchar();
    if(ch==EOF)
        break;

    putc(ch,fp);
  }
  printf("\nFile is Saved....");

printf("\n");
}

