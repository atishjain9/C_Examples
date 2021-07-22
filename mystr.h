//function declarations
void propercase(char[]);

int wcount(char[]);


//function definitions

void propercase(char str[])
{
	int i;
	
	if(str[0]>=65 && str[0]<=90)
	   putchar(str[0]);
	else
	    if(str[0]>=97 && str[0]<=122)
		   putchar(str[0]-32);
		else
		   putchar(str[0]);
		   
	for(i=1;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			putchar(str[i]);
			i++; //move to the next character after the space
			
			if(str[i]>=65 && str[i]<=90)
			  putchar(str[i]);
			else
			    if(str[i]>=97 && str[i]<=122)
				   putchar(str[i]-32);
				else
				   putchar(str[i]);     
		}
		else
		   {
		   	if(str[i]>=65 && str[i]<=90)
		   	  putchar(str[i]+32);
		   	else
			    if(str[i]>=97 && str[i]<=122)
				  putchar(str[i]);
				else
				   putchar(str[i]);    
   			
   		    }
	}//end of for	   
	printf("\n");
		         
}//end of function definition


int wcount(char x[])
{
	int i,w=1;
	
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		 w++;
	}
	return w;
}