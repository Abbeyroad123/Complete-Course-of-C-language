#include <stdio.h>
// In first square bracket you write no of rows and in next square bracket you write no of columns
int main()
{
	int i, j;
	int a[2][2] = {{1, 2}, {4, 5}};
	int b[2][2] = {{8, 13}, {3, 9}};
	int c[2][2];
	int d[2][2];
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			c[i][j] = a[i][j] + b[i][j]; // ADDITION of 2 arrays
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			d[i][j] = a[i][j] - b[i][j]; // Subtraction of 2 arrays
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	
return 0;	
}
