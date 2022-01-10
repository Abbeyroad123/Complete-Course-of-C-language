#include <stdio.h>

int main()
{
	int i=0, length, j;
	char swap;
	char word[51];
	printf("Enter the word\n");
	scanf("%s", word);
	while(word[i] != '\0')
	{
		i++;
	}
	length = i;// Exact word count
	for(i=0; i<length-1; i++)
	{
		for(j=0; j<length-1; j++)
		{
			if(word[j]>word[j+1])
			{
				swap = word[j];
				word[j] = word[j+1];
				word[j+1] = swap;
			}
		}
	}
	printf("The word in alphabetical order is %s", word);

return 0;
}
