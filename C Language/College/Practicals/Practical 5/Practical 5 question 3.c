#include <stdio.h>

int main()
{
	int no, i, j=0, k, position, l;
	double remove;
	double array[51];
	printf("Now I am going to show you how to delete an element in an array.\n");
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &array[i]);
	}
	
	printf("What is the number you want to delete in the array ?\n");
	scanf("%lf", &remove);	
	printf("%lf\n", remove);

	while(array[j] != remove)
	{
		j++;
	}
	position = j;
	printf("position = %d\n", position);
	
	for(k=position+1; k<no; k++)
	{
		array[k-1] = array[k];	
	}
	
	printf("The array after deletion of the element:\n");
	for(l=0; l<no-1; l++)
	{
		printf("%lf ", array[l]);
	}

return 0;	
}
