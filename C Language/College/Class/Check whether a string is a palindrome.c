#include <stdio.h>

int main()
{
	int i=0, length1=0, j=0, a=0, b=0;
	char word[51];
	printf("Now I am going to write a program to find whether a word is palindrome or not.\n");
	printf("Please enter the word.\n");
	scanf("%s", word);
	
	while(word[i] != '\0')
	{
		i++;
	}
	length1 = i;
	for(j=0; j<length1; j++)
	{
		if(word[j] == word[length1 - j - 1])
		{
			a = 1;
		}
		else
		{
			b = 1;
		}
	}
	
	if(a==1 && b==0)
	{
		printf("The given word %s is a palindrome.\n", word);
	}
	else 
	{
		printf("The given word %s is not a palindrome.\n", word);
	}
	
return 0;	
}
