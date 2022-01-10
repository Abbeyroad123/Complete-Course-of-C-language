#include <stdio.h>

int main()
{
	int n, i, j, min;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n];
	printf("Start entering the elments:\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:\n", i+1);
		scanf("%d", &array[i]);
	}
	min = array[0];
	for(j=0; j<n; j++)
	{
		if(array[j] < min)
		{
			min = array[j];
		}
	}
	
	printf("The minimum number = %d", min);
	
return 0;	
}
