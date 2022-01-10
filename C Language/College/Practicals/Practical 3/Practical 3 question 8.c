#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double list[5];
	double sum=0;
	double average;
	double sigma=0, dev;
	printf("Plese enter 5 no\n");
	for(i=0; i<5; i++)
	{
		scanf("%lf", &list[i]);
	}
	double min=list[0];
	double max=list[0];
	for(i=0; i<5; i++)
	{
		sum = sum + list[i];
	}
	average = sum/5;
	printf("Average: %.2lf\n", average);
	for(i=0; i<5; i++)
	{
		if(list[i] < min)
		{
			min = list[i];
		}
	}
	printf("Minimum: %.2lf\n", min);
	for(i=0; i<5; i++)
	{
		if(list[i] > max)
		{
			max = list[i+1];
		}
	}
	printf("Maximum: %.2lf\n", max);
	
	for(i=0; i<5; i++)
	{
		sigma = sigma + pow(list[i]-average, 2);
	}
	dev = sqrt(sigma/5);
	printf("Standard Devuation: %.2lf", dev);

return 0;	
}

