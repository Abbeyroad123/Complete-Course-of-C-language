#include <stdio.h>

int main()
{
	int i, no;
	double sum;
	scanf("%d", &no);
	double ing[no];
	double weight[no];
	for(i=0; i<no; i++)
	{
		scanf("%lf", &ing[i]);
	}
	for(i=0; i<no; i++)
	{
		scanf("%lf", &weight[i]);
	}	
	for(i=0; i<no; i++)
	{
		sum = sum + (ing[i] * weight[i]);
	}
	printf("%lf", sum);
	
return 0;	
}
