#include <stdio.h>

int main()
{
	int i, j;
	char words[69][15];
	for(i=0; i<68; i++)
	{
		scanf("%s ", words[i]);
	}
	for(j=67; j>=0; j--)
	{
		printf("%s ", words[j]);
	}
	
return 0;	
}
