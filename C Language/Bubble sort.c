// Bubble sort
#include <stdio.h>

int main()
{
	int n, temp, i, j;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n];
	printf("Start entering the elments:\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:\n", i+1);
		scanf("%d", &array[i]);
	}
	printf("Now I am going to print the unsorted array:\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", array[i]);	
	}	
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(array[j+1] < array[j])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	printf("\nNow I am going to print the Sorted Array:\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", array[i]);	
	}
	
return 0;	
}
