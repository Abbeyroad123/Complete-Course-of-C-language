// To find maximum element in an array by while loop
#include <stdio.h>

int main()
{
	int n, i, j=0, max;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n];
	printf("Start entering the elments:\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:\n", i+1);
		scanf("%d", &array[i]);
	}
	max = array[0];
	while(j<n)
	{
		if(array[j] > max)
		{
			max = array[j];
		}
		j++;
	}
	printf("The maximum number = %d\n", max);
	
return 0;	
}
