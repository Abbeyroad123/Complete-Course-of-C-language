#include <stdio.h>

int main()
{
	int i, no;
	double total_weight=0;
	double average;
	scanf("%d", &no);
	double weight[no];
	for(i=0; i<no; i++)
	{
		scanf("%lf", &weight[i]);
		total_weight = total_weight + weight[i];
	}
	average = total_weight / no;
	for(i=0; i<no; i++)
	{
		printf("%.1lf\n", average-weight[i]);
	}
	
return 0;		
}
