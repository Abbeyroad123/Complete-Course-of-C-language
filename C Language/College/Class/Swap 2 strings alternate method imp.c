#include <stdio.h>

int main()
{
	int i=0, j=0, length1, length2, k=0, l=0;
	char word1[51];
	char word2[51];
	char temp[51];
	printf("Please enter the first string.\n");
	scanf("%s", word1);
	printf("Please enter the second string.\n");
	scanf("%s", word2);
	
	while(word1[i] != '\0')
	{
		i++;
	}
	length1 = i;
	while(word2[j] != '\0')
	{
		j++;
	}
	length2 = j;
	
	if(length1 > length2)
	{
		for(k=0; k<length1; k++)
		{
			temp[k] = word1[k];		// using an array called temp as a variable
			word1[k] = word2[k];
			word2[k] = temp[k];
		}
		printf("First string: %s\n", word1);
		printf("Second string: %s", word2);
	}
	else if(length2 >= length1)
	{
		for(l=0; l<length2; l++)
		{
			temp[l] = word1[l];
			word1[l] = word2[l];
			word2[l] = temp[l];
		}
		printf("First string: %s\n", word1);
		printf("Second string: %s", word2);
	}
	
return 0;	
}
