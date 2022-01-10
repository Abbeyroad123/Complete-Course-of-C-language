#include <stdio.h>

int main()
{
	int characters=0, words=0, lines=0;
	FILE *fp;
	char ch;
	printf("Now I am going to write a program to count the number of characters in a file\n");
	fp = fopen("story.txt", "r");
	while((ch=getc(fp)) != EOF)
	{
		characters++;
		if(ch=='\n' || ch=='\0')
		{
			lines++;
		}
		if(ch==' ' || ch=='\t' || ch=='\n' || ch=='\0')
		{
			words++;
		}
	}
	printf("Number of characters = %d\n", characters);
	printf("Number of words = %d\n", words);
	printf("Number of lines = %d\n", lines);
	
return 0;
}
