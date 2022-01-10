#include <stdio.h>

int factorial(int);
int main()
{
	int no;
	int facto;
	printf("Now I am going to show you how to find factorial of a no.\n");
	printf("Please enter the no.\n");
	scanf("%d", &no);
	if(no<0)
	{
		printf("Number is negative ABORTING!");
	}
	else
	{
		facto = factorial(no);
		printf("Result: %d", facto);
	}
	
return 0;	
}

int factorial(int no)
{
	int result;
	if(no == 0)
	{
	    result = 1;
	}
	else 
	{
		result = no * factorial(no-1);
	}
	return result;
}
