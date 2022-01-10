#include <stdio.h>

int main()
{
	int i, times;
	char word[101];
	scanf("%d", &times);
	scanf("%s", word);
	for(i=0; i<times; i++)
	{
		printf("%s\n", word);
	}
	
return 0;	
}
