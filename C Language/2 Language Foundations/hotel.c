#include <stdio.h>

int main()
{
	int age, luggage;
	scanf("%d", &age);	
	scanf("%luggage", &luggage);
	if(age = 60)
	{
		printf("%d", 0);
	}
	else
	{
		//printf("You are not 60 years old");
	}
	if(age<10)
	{
		printf("%d", 10);
	}
	else
	{
		//printf("You are  not child")
	}
	if(age>10 && age!=60)
	{
		if(luggage>20)
		{
			printf("%d", 40);
		}
		else
		{
			printf("%d", 30);
		}
	}
	else
	{
		//printf("You are not human");
	}
	
return 0;	
}
/*
#include <stdio.h>

int main()
{
	int age, weight;
	scanf("%d", &age);
	scanf("%d", &weight);
	if(age == 60)
	{
		printf("%d", 0);
	}
	else if(age < 10)
	{
		printf("%d", 5);
	}
	else
	{
		if(weight > 20)
		{
			printf("%d", 40);
		}
		else
		{
			printf("%d", 30);
		}
	}
	
return 0;	
}
*/
