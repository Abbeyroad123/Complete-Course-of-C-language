#include <stdio.h>

int main()
{
	int no;
	int a, b;
	printf("Enter a no.\n");
	scanf("%d", &no);
	if(no%5==0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	
	if(no%8==0)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	
	if(a==1 && b==1)
	{
		printf("The no %d is divisible by 5 and 8", no);
	}
	else if(a==0 && b==1)
	{
		printf("The no %d is divisible by 8 but not by 5", no);
	}
	else if(a==1 && b==0)
	{
		printf("The no %d is divisible by 5 and not by 8", no);
	}
	else if(a==0 && b==10)
	{
		printf("The no %d is not divisible either by 5 or by 8", no);
	}

return 0;	
}
