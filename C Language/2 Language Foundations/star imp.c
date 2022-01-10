#include <stdio.h>

int main()
{
	int i, no, j;
	char ch = '*';
	scanf("%d", &no);
	for(i=0; i<no; i++)
	{
		for(j=0; j<no; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	
return 0;	
}
