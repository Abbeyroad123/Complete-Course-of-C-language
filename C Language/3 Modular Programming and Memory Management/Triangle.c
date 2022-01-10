#include <stdio.h>

int main()
{
	int rows;
	int i, j;
	scanf("%d", &rows);
	for(i=0; i<rows; i++)
	{
		for(j=0; j<i+1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
	
return 0;	
}
