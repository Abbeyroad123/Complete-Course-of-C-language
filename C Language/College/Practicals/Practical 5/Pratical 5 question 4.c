#include <stdio.h>

int main()
{
	int no, i, j=0, a=0, position;
	double search;
	double array[51];
	printf("Now I am going to show you how to linear search for an element.\n");
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &array[i]);
	}	
	
	printf("What is the number you want to find ?\n");
	scanf("%lf", &search);
	
	while(array[j] != '\0')
	{
		if(array[j] == search)
		{
			a = 1;
			position = j;
			break;
		}
		j++;
	}
	
	if(a == 1)
	{
		printf("The number %lf is present in the array at %d position.\n", search, position+1);
	}
	else if(a == 0)
	{
		printf("The number %lf is not present in the array.\n", search);
	}
	
return 0;	
}
