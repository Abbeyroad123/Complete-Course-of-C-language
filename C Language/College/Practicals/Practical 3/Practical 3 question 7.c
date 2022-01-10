#include <stdio.h>

int main()
{
	int late;
	printf("How many days are you late to return the book?\n");
	scanf("%d", &late);	
	if(late>=0 && late<=5)
	{
		printf("The fine is %d paisa", 50);
	}
	else if(late>=6 && late<=10)
	{
		printf("The fine is %d rupee", 1);
	}
	else if(late>10 && late<=30)
	{
		printf("The fine is %d rupee", 10);
	}
	else if(late>30)
	{
		printf("Your membership has been revoked!");
	}
	else
	{
		printf("You have entered invalid value!");
	}
	
return 0;	
}
