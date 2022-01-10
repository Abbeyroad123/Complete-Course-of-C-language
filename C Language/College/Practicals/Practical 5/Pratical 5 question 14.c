#include <stdio.h>

int main()
{
	int i, j, k, l, m, p, q, count, maxcount, no;
	double sum=0, average, median, mode, swap;
	double list[51];
	printf("Now I am going to find mean, median, mode of an array.\n");
	printf("How many elements do you want in the array?\n");
	scanf("%d", &no);
	printf("Now lets start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &list[i]);
	}
	for(j=0; j<no-1; j++)
	{
		for(k=0; k<no-1; k++)
		{
			if(list[k] > list[k+1])
			{
				swap = list[k];
				list[k] = list[k+1];
				list[k+1] = swap;
			}
		}
	}
	printf("Sorted array (In ascending order): \n");
	for(l=0; l<no; l++)
	{
		printf("%.2lf ", list[l]);
	}
	for(m=0; m<no; m++)
	{
		sum = sum + list[m];	
	}	
	average = sum/no;
	printf("\nThe average of all the given elements is: %.2lf\n", average);
	
	if((no%2) == 0) // Even number of elements
	{
		median = ((list[(no/2 - 1)]) + (list[((no/2) + 1)-1]))/2;
		printf("The median of the above given elements is: %.2lf\n", median);
	}
	else
	{
		median = list[(((no+1)-1)/ 2)];
		printf("The median of the above given elements is: %.2lf\n", median);
	}
	
	// Now to find mode of the above given array we need to compare the frequency of each number. 
	/* for(p=0; p<no; p++)
	{
		a = list[p];
		for(q=0; q<no; q++)
		{
			if(list[q] == a)
			{
				b = b + 1;
			}
		}
		frequency[p] = b;
		a=0;
	}
	*/
	for(p=0; p<no; p++)
	{
		count = 0;
		for(q=0; q<no; q++)
		{
			if(list[p] == list[q])
			{
				count = count + 1;
			}
		}
		if(count > maxcount)
		{
			maxcount = count;
			mode = list[p];
		}
	}
	printf("The mode of the above given elements is: %.2lf\n", mode);
	
return 0;	
}
