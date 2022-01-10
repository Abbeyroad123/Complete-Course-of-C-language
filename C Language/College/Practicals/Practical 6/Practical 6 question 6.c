#include <stdio.h>

void increasearray(int *, int);

int main()
{
	int i, no, j;
	int array[51];
	printf("Now I am going to write a program to show you how to to pass and return an array out of a function.");
	printf("Please enter an array and I will return a new array in which each element is increased by 1.\n");
	printf("How many numbers do you want in the array.\n");
	scanf("%d", &no);
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no ; i++)
	{
		printf("%d element = ", i+1);
		scanf("%d", &array[i]); // When we use scanf for strings we normally dont write & but when we address a specific part of array we use &.
	}
	increasearray(array, no);
	printf("New array:\n");
	for(j=0; j<no; j++)
	{
	    printf("%d element = %d\n", j+1, array[j]);
	}
	
return 0;
}

void increasearray(int * x, int no)
{
	int i;
	for(i=0; i<no; i++)
	{
		*(x+i) = *(x+i) + 1;
	}
}
