#include <stdio.h>

int fibonacci(int);

int main()
{
	int no, value, i;
	printf("Now I am going to write fibonacci series of n numbers.\n");
	printf("Upto how many numbers do you want the fibonacci series?\n");
	scanf("%d", &no);
	if(no<0)
	{
		printf("Please enter a positive value. Aborting!\n");
	}
	else
	{
		for(i=0; i<no; i++)
		{
			value = fibonacci(i+1);
			printf("%d fibonacci no: %d\n", i+1, value);			
		}

	}
	
return 0;
}

int fibonacci(int no)
{
	int result;
	if(no == 1)
	{
		result = 0;
	}
	else if(no == 2)
	{
		result = 1;
	}
	else
	{
		result = fibonacci(no-1) + fibonacci(no-2);
	}
	
return result;	
}
