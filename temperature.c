
/* Program name: temperature.c
   Author: Atish Jain
   IDE: C-Free 5.0
   Task: Converts Temperature from fahrenheit to Celsius */
   
main()
{
	float fh,c;
	
	printf("Enter Tempreature in fahrenheit:");
	scanf("%f",&fh);
	
	c=(fh-32)*5/9;
	
	printf("Temperature in Celsius is:%f",c);
	
	printf("\n");
}
