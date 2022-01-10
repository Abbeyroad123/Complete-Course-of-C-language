#include <stdio.h>

int main()
{
	int hours; // no of hours after noon you arrive
	int price;
	scanf("%d", &hours);
	price = 10 + 5*hours;
	if(price <= 53)
	{
	printf("%d", price);
	}
	else
	{
	printf("%d", 53);
	}

return 0;	
}
