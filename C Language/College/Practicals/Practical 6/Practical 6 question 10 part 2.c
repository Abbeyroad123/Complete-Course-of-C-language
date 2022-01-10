#include <stdio.h>

int main()
{
	int i=0, j=0, length1=0, length2=0, a=0, b=0, k=0;
	char word1[51];
	char word2[51];
	printf("Now I will write a program to determine whether 2 strings are equal or not.\n");
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
	
	if(length1 == length2)
	{
		for(k=0; k<length1; k++)
		{
			if(word1[k] == word2[k])
			{
				a=1;
			}
			else
			{
				b = 1;
			}
		}
		
        if(a==1 && b==0)
        {
        	printf("Both strings %s and %s are equal.\n", word1, word2);
        }
        else
        {
        	printf("Strings are not equal.\n");
        }
	}
	else 
	{
		printf("Strings are not equal.\n");
	}
	
return 0;	
}
