#include <stdio.h>

int main()
{
	int no, i, j;
	double array[51];
	printf("Now I am going to show you how to reverse an array of int/float.\n");
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &array[i]);
	}
	
	printf("Now I am going to print the reverse array.\n");
	for(j=no-1; j>=0; j--)
	{
		printf("%.2lf ", array[j]);
	}
	
return 0;	
}
