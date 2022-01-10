#include <stdio.h>

int main()
{
	int min, max, reading;
	scanf("%d", &min);
	scanf("%d", &max);
	while(1)
	{
		scanf("%d", &reading);
		if(reading<=max && reading>=min)
		{
			printf("Nothing to report\n");
		}
		else if(reading == -999)
		{
			break;
		}
		else if(reading<min || reading >max)
		{
			printf("Alert\n");
            break;
		}
	}
	
return 0;	
}
