#include <stdio.h>

int main()
{
	int i=0, length1=0, j, k=0;
	char temp;
	char word1[51];
	char word2[51];
	printf("Now I am going to show to reverse a string.\n");
	printf("Please enter the string.\n");
	scanf("%s", word1);
	
	while(word1[i] != '\0')
	{
		i++;
	}
	length1 = i;
	
	for(j=(length1 - 1); j>=0; j--)
	{
		temp = word1[j];
		word2[k] = temp;
		k++;
	}
	printf("%s", word2);
	
return 0;	
}
