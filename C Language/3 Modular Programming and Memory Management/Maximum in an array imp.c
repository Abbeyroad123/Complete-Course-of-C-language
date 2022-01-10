#include <stdio.h>

int main()
{
	int i;
	int max;
	for(i=0; i<5; i++)
	{
		scanf("%d", &list[i]);
	}
	for(j=0; j<5; j++)
	{
		if(list[i+1] > list[i])
		{
			max = list[i+1];
			printf("%d", max);
		}
	}
	
return 0;	
}
