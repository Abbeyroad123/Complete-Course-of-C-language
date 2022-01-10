#include <stdio.h>

int main()
{
	int no, digit, sum=0;
	printf("Now I am going to show you a program to add digits of a number.\n");
	printf("Please enter the no.\n");
	scanf("%d", &no);

	while(no>=1)
	{
		digit = no % 10;
		printf("Digit: %d\n", digit);
		sum = sum + digit;
		no = no/10;
	}
	printf("Sum: %d", sum);
	
return 0;	
}
