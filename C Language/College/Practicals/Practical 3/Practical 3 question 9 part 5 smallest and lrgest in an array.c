#include <stdio.h>

int main()
{
	int i;
	int no;
	printf("How many numbers do you want to enter?\n");
	scanf("%d", &no);
	int list[no];
	printf("Please enter the numbers.\n");
	for(i=0; i<no; i++)
	{
		scanf("%d", &list[i]);	
	}
	int max = list[0];
	int min = list[0];
	for(i=0; i<no; i++)
	{
		if(list[i] > max)
		{
			max = list[i];
		}
	}
	printf("Maximum no id %d\n", max);
	
	for(i=0; i<no; i++)
	{
		if(list[i] < min)
		{
			min = list[i];
		}
	}
	printf("Minimum no is %d\n", min);
	
return 0;
}
