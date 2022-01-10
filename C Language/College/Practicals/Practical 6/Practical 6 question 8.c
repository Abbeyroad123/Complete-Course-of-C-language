#include <stdio.h>

int main()
{
	int i, length, j;
	char word1[51];
	char word2[51];
	printf("Now I am going to write a program to copy one string to another string.\n");
	printf("Please enter a string.\n");
	scanf("%s", word1);
	while(word1[i] != '\0')
	{
		i++;
	}
	length = i;
	printf("Now I am going to copy this string into another different string.\n");
	char * adr1 = word1;
	char * adr2 = word2;
	for(j=0; j<length; j++)
	{
		*(adr2 + j) = *(adr1 + j);
	}
	printf("The new string is: %s", word2);
	
return 0;	
}
