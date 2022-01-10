#include <stdio.h>

int main()
{
	int expenditure;
	int sum=0;
	scanf("%d", &expenditure);
	while(expenditure != -1)
	{
	    sum = sum + expenditure;
		scanf("%d", &expenditure);
	}
	printf("%d", sum);

return 0;	
}
