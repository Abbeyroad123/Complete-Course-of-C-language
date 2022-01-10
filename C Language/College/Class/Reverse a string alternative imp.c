#include <stdio.h>

int main()
{
	int i=0, length1=0, j=0;
	char temp;
	char word1[51];
	printf("Now I am going to show to reverse a string.\n");
	printf("Please enter the string.\n");
	scanf("%s", word1);
	
	while(word1[i] != '\0')
	{
		i++;
	}
	length1 = i;
	
	for(j=0; j<length1/2; j++)
	{
		temp = word1[j];
	    word1[j] = word1[length1 - j - 1];
		word1[length1 - j - 1] = temp;
	}
	printf("%s", word1);
	
return 0;	
}
