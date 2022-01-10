#include <stdio.h>

void sum(float, float); 	// Means return type of the function is void and has 2 parameters which are both float

int main()
{
	float a, b;
	printf("Now I am going to show you various return types like void, int, float, char etc.\n");
	printf("Now I am going to add 2 numbers by help of a function called sum and use return type void\n");
	printf("Please enter the first no.\n");
	scanf("%f", &a);
	printf("Please enter the second no.\n");
	scanf("%f", &b);	
	sum(a, b);		// a and b here are the values of arguments for the function sum
	
return 0;	
}

void sum(float x, float y)
{
	float result;
	result = x + y;
	printf("%f + %f = %f\n", x, y, result);
		
}
