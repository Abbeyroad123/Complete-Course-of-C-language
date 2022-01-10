#include <stdio.h>

int main()
{
	int i, j, k, no;
	double list1[51];
	double list2[51];
	printf("Now I am going to show you hot to rotate array elements.\n");
	printf("How many elements do you want in the array?\n");
	scanf("%d", &no);
	printf("Now lets start entering the elements of the array.\n");
	for(i=0; i<no; i++)
	{
		scanf("%lf", &list1[i]);
	}
	
	for(j=0; j<no; j++)
	{
		list2[j] = list1[no-j-1];
	}
	printf("After rotation of the elements of the array, the new array formed is:\n");
	for(k=0; k<no; k++)
	{
		printf("%.2lf ", list2[k]);
	}

return 0;	
}
