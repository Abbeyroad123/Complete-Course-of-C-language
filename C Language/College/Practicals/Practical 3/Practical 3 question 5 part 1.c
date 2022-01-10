#include <stdio.h>

int main()
{
	int no;
	printf("Please enter the no,\n");
	scanf("%d", &no);
	if(no%2 == 0)
	{
		printf("The no %d is even no\n", no);
	}
	else
	{
		printf("The no %d is odd no\n", no);
	}
	
	if(no>=0)
	{
		printf("The no %d is positive no\n", no);
	}
	else
	{
		printf("The no %d is negative no\n", no);
	}
	
return 0;	
}
