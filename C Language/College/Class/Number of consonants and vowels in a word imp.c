#include <stdio.h>

int main()
{
	int i=0, j=0, vowel=0, consonant=0, length=0;
	char word[51];
	printf("Please enter a word.\n");
	scanf("%s", word);
	
	while(word[i] != '\0')
	{
		i++;
	}
	length = i;
	
	for(j=0; j<length; j++)
	{
		if (word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u' || word[j]=='A' || word[j]=='E' || word[j]=='I' || word[j]=='O' || word[j]=='U')
		{
			vowel = vowel + 1;
			printf("%c\n", word[j]);
		}
		else
		{
			consonant = consonant + 1;	
		}
	}
	
	printf("Number of consonants = %d\n", consonant);
	printf("Number of vowels = %d\n", vowel);
	
return 0;	
}
