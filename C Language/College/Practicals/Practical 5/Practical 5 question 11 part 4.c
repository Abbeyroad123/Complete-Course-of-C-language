#include <stdio.h>

int main()
{
	int row1, column1, i, j, k, l, m, n;
	double matrix1[10][10];
	double transpose[10][10];
	printf("Now I a going to find transpose of a matrix.\n");
	printf("Now lets start entering the data of matrix.\n");
	printf("Number of rows: \n");
	scanf("%d", &row1);
	printf("Number of columns: \n");
	scanf("%d", &column1);
	
	for(i=0; i<row1; i++)
	{
		for(j=0; j<column1; j++)
		{
			printf("Enter the elements of %d row.\n", i+1);
			scanf("%lf", &matrix1[i][j]);
		}
	}	
	
	for(k=0; k<row1; k++)
	{
		for(l=0; l<column1; l++)
		{
			transpose[l][k] = matrix1[k][l];	
		}	
	}	
	
	printf("The transpose of the above given matrix is: \n");
	for(m=0; m<column1; m++)
	{
		for(n=0; n<row1; n++)
		{
			printf("%.2lf ", transpose[m][n]);
		}
		printf("\n");
	}
	
return 0;	
}
