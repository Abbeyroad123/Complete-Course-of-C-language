//Program to find addition of 2 matrices
#include <stdio.h>

int main()
{
	int row1, column1, row2, column2, i, j;
	printf("Now I am going to write a program to find subtraction of two matrices.\n");
	
	printf("How many rows do you want in the first matrix?\n");
	scanf("%d", &row1);
	printf("How many columns do you want in the first matrix?\n");
	scanf("%d", &column1);
	int matrix1[row1][column1];
	
	printf("How many rows do you want in the second matrix?\n");
	scanf("%d", &row2);
	printf("How many columns do you want in the second matrix?\n");
	scanf("%d", &column2);
	int matrix2[row2][column2];
	
	printf("Start entering the elements of the first matrix?\n");
	for(i=0; i<row1; i++)
	{
		for(j=0; j<column1; j++)
		{
			printf("Row %d Element %d: ", i+1, j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("Start entering the elements of the second matrix?\n");
	for(i=0; i<row2; i++)
	{
		for(j=0; j<column2; j++)
		{
			printf("Row %d Element %d: ", i+1, j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	int matrix3[row1][column1];
	// Now I will create a third matrix in which I will put subtraction of the 2 matrices, matrix1 and matrix2
	for(i=0; i<row1; i++)
	{
		for(j=0; j<column1; j++)
		{
			matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	printf("The subtraction of the 2 matrices is:\n");
	for(i=0; i<row1; i++)
	{
		for(j=0; j<column1; j++)
		{
			printf("%d\t", matrix3[i][j]);
		}
		printf("\n");
	}
	
return 0;	
}
