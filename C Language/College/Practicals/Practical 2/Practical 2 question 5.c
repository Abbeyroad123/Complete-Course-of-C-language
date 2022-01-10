#include <stdio.h>

int main()
{
	double a, b, temp;
	printf("Now I am going to show you how to swap variables.\n");
	printf("What no do you want to store in variable a?\n");
	scanf("%lf", &a);	
	
	printf("What no do you want to store in variable b?\n");
	scanf("%lf", &b);
	
	printf("Now I am going to swap the value of variables a and b.\n");
	temp = a;
	a = b;
	b = temp;
	
	printf("Value of a: %.2lf\n", a);
	printf("Value of b: %.2lf\n", b);
	
return 0;	
}
