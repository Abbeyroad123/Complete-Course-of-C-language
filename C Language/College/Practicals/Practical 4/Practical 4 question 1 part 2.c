#include <stdio.h>

int main()
{
	double a, b;
	double temp;
	printf("Now I am going to show you how to swap two vaiables without a temp variable\n");
	printf("What is the first variable?\n");
	scanf("%lf", &a);
	printf("What is the second variable?\n");
	scanf("%lf", &b);
	
	double * addressOfA = &a;
	double * addressOfB = &b;
	
	temp = * addressOfA;
	* addressOfA = * addressOfB;
	* addressOfB = temp;
	
	printf("Value of first variable: %.2lf\n", a);
	printf("Value of second variable: %.2lf\n", b);
	
return 0;			
}

