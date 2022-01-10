#include <stdio.h>

int main()
{
	int i=0;
	char word[30];
	printf("Please enter a word: ");
	scanf("%s", word);
	while(word[i] != '\0')
	{
		i++;
	}
	printf("The word &s has has %d letters", word, i);

rturn 0;
}
