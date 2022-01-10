#include <stdio.h>

int main()
{
	int passengers;
	double gas; //price of gas in decimals
	double pay; //money you need to pay
	scanf("%d", &passengers);
	scanf("%lf", &gas);
	if(passengers == 0)
	{
		pay = gas;
		printf("%.2lf", pay);
	}
	else
	{
		pay = (gas+1)/(passengers+1);
		printf("%.2lf", pay);
	}

return 0;	
}
