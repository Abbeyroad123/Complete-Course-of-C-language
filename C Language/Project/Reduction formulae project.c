#include <stdio.h>
#include <math.h>
#define PI 3.14
int integrate(int, int);

int main()
{
	int no, angle;
	double value;
	printf("Now I am going to write a program to show use of reduction formulae.\n");
	printf("What is the power of trigonometric function?\n");
	scanf("%d", &no);
	printf("What is the value of theta in degrees?\n");
	scanf("%d", &angle);
	if(no<0)
	{
		printf("Please enter a valid power!\n");
	}
	else
	{
	    printf("%d\n", no);
		value = integrate(no, angle);
		printf("%lf\n", value);
		printf("Result: %lf + c", value);
	}
	
return 0;	
}

int integrate(int no,int angle)
{
	double result;
	int a, b;
	if(no == 0)
	{
		result = angle;
	}
	else if(no == 1)
	{
	    printf("d\n");
	    b = angle/180;
	    printf("%d\n", b);
		result = cos(angle);
	}
	else
	{
		a = (angle/180) * PI;
		result = ( ((-1)*cos(angle)*pow(sin(angle), no-1)/no) + (((no-1)/no)*integrate(no-2, angle)) );
	}

return result;	
}
