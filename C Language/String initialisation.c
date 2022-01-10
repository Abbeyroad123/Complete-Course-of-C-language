#include <stdio.h>

int main()
{
    int i;
	char word[9]="kanishka";
	for(i=0; i<9; i++)
	{
		if(word[i] != '\0')
		{
			printf("Yes %c\n", word[i]);
		}
		else
		{
			printf("No\n");
		}
	}
	
return 0;	
}
