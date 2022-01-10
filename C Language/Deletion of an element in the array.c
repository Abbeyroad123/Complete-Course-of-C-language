#include <stdio.h>

int main()
{
	int n, i, j, remove, position;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n]; 
	printf("Start entering the elments:\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:\n", i+1);
		scanf("%d", &array[i]);
	}
	printf("What number do you want to delete in the array.\n");
	scanf("%d", &remove);
	printf("At which position do you want to delete the number?\n");
	scanf("%d", &position);
	i=0;
	for(i=position-1; i<n-1; i++)
	{
		array[i] = array[i+1];
	}
	printf("The new list after deletion of the element %d is:\n", insert);
	for(j=0; j<n-1; j++)
	{
		printf("%d ", array[j]);
	}
	
return 0;	
}
