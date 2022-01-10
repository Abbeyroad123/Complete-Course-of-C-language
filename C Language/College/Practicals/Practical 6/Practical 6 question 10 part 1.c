#include <stdio.h>

int main()
{
	int i=0, j=0, length1=0, length2=0, length3=0, k=0, l=0, m=0;
	char word1[51];
	char word2[51];
	char word3[51];
	printf("Now I am going to show you hot to concatenate two strings,\n");
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
	length3 = length1 + length2;
	
	for(k=0; k<length1; k++)
	{
		word3[k] = word1[k];
	}
	for(l=length1; l < length3; l++)
	{
		word3[l] = word2[m];
		m++;
	}
	
	printf("%s", word3);
	
return 0;	
}
