#include <stdio.h>
//In this question we need to use recursion
int power(int , int);

int main()
{
	int x, n;
	int result;
	printf("What is the value of x?\n");
	scanf("%d", &x);
	printf("To how much power do you want to raise x?\n");
	scanf("%d", &n);
	
	result = power(x,n);
	printf("Result: %d", result);
	
return 0;	
}

int power(int x, int y)
{
	if(y==0)
	{
		return 1;
	}
	else if(y%2 == 0)
	{
		return power(x,y/2)*power(x,y/2);
	}
	else
	{
		return x*power(x,y/2)*power(x,y/2);
	}
}
