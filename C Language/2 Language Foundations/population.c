#include <stdio.h>

int main()
{
	int i, cities, greater=0;
	scanf("%d", &cities);
	int pop[cities];
	for(i=0; i<cities; i++)
	{
		scanf("%d", &pop[i]);
	}
	for(i=0; i<cities; i++)
	{
		if(pop[i] > 10000)
		{
			greater = greater + 1;
		}	
	}
	printf("%d", greater);
	
return 0;	
}
