#include <stdio.h>

int factorial(int);

int main()
{
	int no, value;
	printf("Of which number do you want the factorial of?\n");
	scanf("%d", &no);
	value = factorial(no);	
	printf("Factorial(%d!) = %d", no, value;
	
return 0;	
}

int factorial(int no)
{
	int result;
	if(no==1)
	{
		result = 1;
	}
	else
	{
		result = no*factorial(no-1);
	}

return result;	
}
