#include <stdio.h>

int main()
{
	int i, k, l, m, no;
	double list[51];
	double swap;
	printf("Now I am going to sort the elements of an array.\n");
	printf("How many elements do you want in the array?\n");
	scanf("%d", &no);
	printf("Now lets start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &list[i]);
	}
		
	printf("Now I am going to use bubble sort to sort the elements of the array in ascending order.\n");
	for(k=0; k<no-1; k++)
	{
		for(l=0; l<no-1; l++)
		{
			if(list[l] > list[l+1])
			{
				swap = list[l];
				list[l] = list[l+1];
				list[l+1] = swap;
			}
		}
	}
	
	printf("Sorted array:\n");
	for(m=0; m<no; m++)
	{
		printf("%.2lf ", list[m]);
	}
	
return 0;	
}
