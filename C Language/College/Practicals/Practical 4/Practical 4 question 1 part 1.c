#include <stdio.h>

int main()
{
	double a, b, temp;
	printf("Now I am going to show you how to swapt two vaiables with a temp variable\n");
	printf("What is the first variable?\n");
	scanf("%lf", &a);
	printf("What is the second variable?\n");
	scanf("%lf", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Value of first variable: %.2lf\n", a);
	printf("Value of second variable: %.2lf\n", b);
	
return 0;	
}


