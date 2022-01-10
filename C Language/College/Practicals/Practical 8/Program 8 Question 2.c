#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;
	printf("Now I am going to read the file Story.txt and display its contents on the screen\n");
	fp = fopen("story.txt", "r");
	while((ch=getc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	
return 0;
}
