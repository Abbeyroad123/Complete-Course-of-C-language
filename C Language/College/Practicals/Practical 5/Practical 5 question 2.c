#include <stdio.h>

int main()
{
	int i, no, position, j, k;
	double insert;
	double array[51];
	printf("Now I am going to show you how to insert an element at a given location of an array.\n");
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &array[i]);
	}
	
	printf("What is the number you want to insert in the array ?\n");
	scanf("%lf", &insert);
	
	printf("Now at which location do you want to insert the element ?\n");
	scanf("%d", &position);
	
	for(j=no+1; j>=(position-1); j--)
	{
		array[j] = array[j-1];
		if(j == (position-1))	
		{
			array[j] = insert;
		}
	}	
	
	printf("The new array after insertion of number is:\n");
	for(k=0; k<no+1; k++)
	{
		printf("%.2lf ", array[k]);
	}

return 0;	
}
