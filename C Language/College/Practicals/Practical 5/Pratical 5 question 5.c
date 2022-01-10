#include <stdio.h>

int main()
{
	int i, found = 0, ia, ib, mid, no, j, k, l;
	double search, swap;
	double array[51];
	printf("Now I am going to show you how to binary search for an element in an array.\n");
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &array[i]);
	}	
	
	printf("What is the number you want to find ?\n");
	scanf("%lf", &search);
	
	/* For binary search we need an ordered list so now I am going to use bubble sort to convert 
		unordered list into ordered list. */
	
	for(j=0; j<no-1; j++)
	{
		for(k=0; k<no-1; k++)
		{
			if(array[k] > array[k+1])
			{
				swap = array[k];
				array[k] = array[k+1];
				array[k+1] = swap; 
			}
		}
	}
	// Now by bubble sort I have ordered list instead of earlier unordered list.
	printf("The ordered list is:\n");
	for(l=0; l<no; l++)
	{
	    printf("%.2lf ", array[l]);
	}
	printf("\n");
	
	// Now I am going to apply binary search or bisection.
	ia = 0;
	ib = no-1;
	while(!found && ia <= ib)
	{
		mid = (ia + ib)/2;
		if(search == array[mid])
		{
			found = 1;
		}
		else if(search < mid)
		{
			ib = mid - 1;
		}
		else if(search > mid)
		{
			ia = mid + 1;
		}
	}
	
	if(found == 0)
	{
		printf("The given number %lf is not present in the array.\n", search);
	}
	else if(found == 1)
	{
		printf("The number %lf is present in the array at position %d", search, mid+1);
	}
	
return 0;	
}
