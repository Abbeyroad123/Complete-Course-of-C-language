#include <stdio.h>

int main()
{
	int i, no, j, k;
	double max, min;
	double list[51];
	printf("Now I a going to write a program to find the largest and smallest number in an array.\n");
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &list[i]);
	}		
	
	max = list[0];
	min = list[0];
	for(j=0; j<no-1; j++)
	{
		if(list[j+1] > list[j])
		{
			max = list[j+1];
		}
	}
	for(k=0; k<no-1; k++)
	{
		if(list[k+1] < list[k])
		{
			min = list[k+1];
		}
	}
	
	printf("The largest number in the array id %.2lf.\n", max);
	printf("The smallest number in the array is %.2lf.\n", min);
	
return 0;	
}
