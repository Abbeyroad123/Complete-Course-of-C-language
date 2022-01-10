#include <stdio.h>

int main()
{
	int i, no, j;
	double sum=0, average;
	double array[51];
	printf("Now I am going to write a program to find sum and average of array elememts.\n");	
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &array[i]);
	}
	
	// Now I am going to find the sum of the different array elements.
	for(j=0; j<no; j++)
	{
		sum = sum + array[j];
	}
	printf("The sum of all array elemnts is %.2lf\n", sum);
	
	// Now I am going to find the average of the different array elements.
	average = sum/no;
	printf("The average of all array elements if %.2lf\n", average);

return 0;	
}
