/* Program name: bookread1.c
   Author : Atish Jain
   IDE: C-Free 5.0
   Task : Program to read user input using functions*/

# include <stdio.h>
struct book
{
	int id;
	char title[50];
	int price;
}b1,b2;

main()
{
	
	struct book input(void);
	void display(struct book);
	
	printf("\nReading Book Information:");
	printf("\n-------------------------");
	b1=input();
	b2=input();
	
	printf("\n\nBook information....");
	printf("\n-----------------------");
	display(b1);
	display(b2);
	
    printf("\n");
}

struct book input(void)
{
	struct book b;
	printf("\nEnter Book id:");
	scanf("%d",&b.id);
	printf("Enter Book Title....:");
	fflush(stdin);
	gets(b.title);
	printf("Enter Book Price...:");
	scanf("%d",&b.price);
	
	return b;
}

void display(struct book b)
{
	printf("\nBook id:%d",b.id);
	printf("\nBook Title...:%s",b.title);
	printf("\nBook Price...:%d",b.price);
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
