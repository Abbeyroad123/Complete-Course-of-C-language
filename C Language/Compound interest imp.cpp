#include <stdio.h>
#include <math.h>
int main()
{
	double principal, rate, time, amount;
	printf("Now I am going to write a program to find compound interest.\n");
	printf("What is the principal amount?\n");
	scanf("%lf", &principal);
	printf("What is the rate of interest?\n");
	scanf("%lf", &rate);
	printf("What is the number of years?\n");
	scanf("%lf", &time);
	amount = principal * pow((1+(rate/100)), time);
	printf("%lf\n", amount);
	printf("The compund interest = %lf", amount-principal);
	
return 0;	
}
