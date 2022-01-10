#include <stdio.h>

int main()
{
	int list[101];
	int i;
	printf("Start entering numbers.\n");
	scanf("%d", &list[0]);
	int sum = 0;
	if(list[0] == -999)
	{
		printf("Sum = %d", 0);
	}
	else
	{
		i=0;
		while(list[i] != -999)
		{
		    scanf("%d", &list[i+1]);
			sum = sum + list[i];	
			i++;
		}	
		printf("Sum of no: %d", sum);
	}		
	
return 0;	
}
