// To use binary search to find an element in the array
#include <stdio.h>

int main()
{
	int n, i, j, mid, ia, ib, find, found=0, temp;
	printf("How many numbers do you want in the array?\n");
	scanf("%d", &n);
	int array[n];
	printf("Start entering the elememts of the array.\n");
	for(i=0; i<n; i++)
	{
		printf("Element %d:", i+1);
		scanf("%d", &array[i]);
	}
	printf("Which number do you want to find in the array?\n");
	scanf("%d", &find);
	// Now I am going to sort the list by bubble sort
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(array[i+1] < array[i])
			{
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
			}
		}		
	}	
	// Now my list has become sorted. Please remember format of bubble sort by heart
	// Now I am going to apply binary search(midpoint method)
	ia = 0;
	ib = n-1;
	while((found == 0) && (ia<=ib))
	{
		mid = (ia+ib) / 2;
		if(find == array[mid])
		{
			found = 1;
		}
		else if(find < array[mid])
		{
			ib = mid-1;
		}
		else if(find > array[mid])
		{
			ia = mid+1;
		}
	}
	if(found == 1)
	{
		printf("The number %d is located at %d index (%d position)", find, mid, mid+1);		
	}
	else
	{
		printf("The number %d is not present in the array.\n", find);
	}

	
return 0;	
}
