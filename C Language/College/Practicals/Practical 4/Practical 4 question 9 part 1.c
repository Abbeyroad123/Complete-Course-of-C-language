#include <stdio.h>

int factorial(int);

int main()
{
	int no;
	int value;
	printf("Now I am going to find factorial of a number by recursion.\n");
	printf("What is the number you want factorial of ?\n");
	scanf("%d", &no);
	if(no<0)
	{
		printf("Please enter a positive number. Aborting!\n");
	}
	else
	{
		value = factorial(no);
		printf("%d! = %d", no, value);
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
	else if(no == 1)
	{
		result = 1;
	}
	else
	{
		result = no * factorial(no-1);
	}

return result;	
}
