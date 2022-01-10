#include <stdio.h>

int main()
{
	int n, find, found=0, i=0, j=0;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n];
	printf("Start entering the elments:\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:\n", i+1);
		scanf("%d", &array[i]);
	}
	printf("Which number do you want to find in the array?\n");
	scanf("%d", &find);
	while(found == 0)
	{
		if(array[j] == find)
		{
			printf("The number %d is at %d position.\n", find, j+1);
			found = 1;
		}
		else
		{
			j++;
		}
	}	
	
return 0;	
}
