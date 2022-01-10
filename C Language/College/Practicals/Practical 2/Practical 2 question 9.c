#include <stdio.h>

int main()
{
	double a, b, mean;
	printf("Now I am going to show you how to divide two numbers and use type casting operation.\n");
	printf("Please enter 2 numbers:\n");
	scanf("%lf %lf", &a, &b);	
	
	mean = (a+b)/2;
	printf("%.2lf\n", mean);
	
	printf("Now I am going to covert this mean into an integer by type casting operation.\n");
	printf("%d\n", (int)mean);
	
return 0;	
}
