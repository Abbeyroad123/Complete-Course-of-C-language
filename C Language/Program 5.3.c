#include <stdio.h>

int main()
{
    int no, a, b;
	printf("Please enter a number:\n");
	scanf("%d", &no);	
	a = no%3;
	b = no%5;
	printf("%d\n", a);
	printf("%d\n", b);
	if(a==0 && b==0)
	{
		printf("%d is divisible by both 3 and 5.\n", no);
	}
	else if(a!=0 && b==0)
	{
		printf("%d is divisible by 5 and not 3.\n", no);
	}
	else if(a==0 && b!=0)
	{
		printf("%d is divisible by 3 and not 5.\n", no);
	}
	else
	{
		printf("%d is not divisible by either 5 or 3.\n", no);
	}
	
return 0;	
}
