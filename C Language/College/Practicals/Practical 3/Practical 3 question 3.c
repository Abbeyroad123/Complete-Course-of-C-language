#include <stdio.h>

int main()
{
	int choice;
	double a, b;
	printf("Please enter the first no.(a)\n");
	scanf("%lf", &a);
	printf("Please enter the second no.(b)\n");
	scanf("%lf", &b);
	printf("Now tell me what calculation you want to perfrom on %.2lf and %.2lf\n", a, b);
	printf("If you want to perform addition(a+b) enter 1.\n");
	printf("If you want to perform subtraction(a-b) enter 2.\n");
	printf("If you want to perform multiplication(a*b) enter 3.\n");
	printf("If you want to perform division(a/b) enter 4.\n");
	printf("If you want to find remainder enter 5.\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Result: %.2lf", a+b);
		break;
		case 2:
			printf("Result: %.2lf", a-b);
		break;
		case 3:
			printf("Result: %.2lf", a*b);
		break;
		case 4:
			printf("Result: %.2lf", a/b);
		break;
		case 5:
			printf("Result: %d", (int)a%(int)b);
		break;
		default:
		printf("You have entered invalid option!");
	}
	
return 0;		
}
