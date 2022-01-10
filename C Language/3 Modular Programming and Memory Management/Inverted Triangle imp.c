#include <stdio.h>

int main()
{
	int rows, columns;
	int i, j;
	scanf("%d", &rows);
	scanf("%d", &columns);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns-1; j++)
		{
			printf("#");
		}
		columns = columns - 1;
		printf("\n");
	}
	
return 0;	
}
