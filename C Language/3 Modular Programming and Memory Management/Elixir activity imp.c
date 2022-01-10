#include <stdio.h>

//Write your function prototype here
void modify(int * );
int main(void)
{
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);
	//Write your function call here
	modify(&age);

	printf("Your new age will be %d!\n", age);
	return 0;
}

void modify(int * x)
{
	if(*x  >= 21)
	{
		*x = *x-10;
	}
	else if(*x <= 20)
	{
		*x = *x * 2;
	}
}

