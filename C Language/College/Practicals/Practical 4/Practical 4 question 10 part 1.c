#include <stdio.h>

int sum(int, int); 	// Means return type of the function is int(integer) and has 2 parameters which are both int

int main()
{
	int a, b, value;
	printf("Now I am going to show you various return types like void, int, float, char etc.\n");
	printf("Now I am going to add 2 numbers by help of a function called sum and use return type int.\n");
	printf("Please enter the first no.\n");
	scanf("%d", &a);
	printf("Please enter the second no.\n");
	scanf("%d", &b);	
	
	value = sum(a, b);		// a and b here are the values of arguments for the function sum
	printf("%d + %d = %d\n", a, b, value);
	
return 0;	
}

int sum(int x, int y)
{
	int result;
	result = x + y;
	
return result;	
}
