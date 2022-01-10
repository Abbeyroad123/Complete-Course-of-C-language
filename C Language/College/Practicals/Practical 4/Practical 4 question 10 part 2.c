#include <stdio.h>

float sum(float, float); 	// Means return type of the function is float and has 2 parameters which are both float

int main()
{
	float a, b, value;
	printf("Now I am going to show you various return types like void, int, float, char etc.\n");
	printf("Now I am going to add 2 numbers by help of a function called sum and use return type float\n");
	printf("Please enter the first no.\n");
	scanf("%f", &a);
	printf("Please enter the second no.\n");
	scanf("%f", &b);	
	
	value = sum(a, b);		// a and b here are the values of arguments for the function sum
	printf("%f + %f = %f\n", a, b, value);
	
return 0;	
}

float sum(float x, float y)
{
	float result;
	result = x + y;
	
return result;	
}
