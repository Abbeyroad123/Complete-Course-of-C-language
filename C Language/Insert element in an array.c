#include <stdio.h>

int main()
{
	int n, i, j, insert, position;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n+1]; // I need to increase the array size from traditionally n to n+1 because in need to insert one more element
	printf("Start entering the elments:\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:\n", i+1);
		scanf("%d", &array[i]);
	}
	printf("What number do you want to insert in the array.\n");
	scanf("%d", &insert);
	printf("At which position do you want to insert the number?\n");
	scanf("%d", &position);
	i=0;
	for(i=n; i>=position-1; i--)
	{
		if(i==position-1)
		{
			array[i] = insert;
		}
		else
		{
			array[i] = array[i-1];	
		}
	}
	printf("The new list after insertion of the element %d is:\n", insert);
	for(j=0; j<n+1; j++)
	{
		printf("%d ", array[j]);
	}
	
return 0;	
}
