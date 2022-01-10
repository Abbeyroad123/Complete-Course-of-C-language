#include <stdio.h>

int main()
{
	int i, j, k, l, m, n, x, y, row1, column1, row2, column2, p;
	double matrix1[10][10], matrix2[10][10], matrix3[2][2];
	printf("Now I am going to write a program to multiply 2 matrices.\n");
	
	printf("Now lets start entering the data of matrix 1.\n");
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
	
	printf("Now lets start entering the data of matrix 2.\n");
	printf("Number of rows: \n");
	scanf("%d", &row2);
	printf("Number of columns: \n");
	scanf("%d", &column2);
	
	for(k=0; k<row2; k++)
	{
		for(l=0; l<column2; l++)
		{
			printf("Enter the elements of %d row.\n", k+1);
			scanf("%lf", &matrix2[k][l]);
		}
	}
	
	for(m=0; m<row1; m++)
	{
		for(n=0; n<column1; n++)
		{
			matrix[m][n] = 0;
			for(p=0; p<row1; p++)
			{
				matrix3[m][n] = matrix3[m][n] + matrix1[m][p] * matrix2[p][n];	
			}
		}
	}
	
	printf("The mutliplication of 2 matrices is:\n");
	for(x=0; x<row1; x++)
	{
		for(y=0; y<column1; y++)
		{
			printf("%.2lf ", matrix3[x][y]);
		}
		printf("\n");
	}
	
return 0;	
}
