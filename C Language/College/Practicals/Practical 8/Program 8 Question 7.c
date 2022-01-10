#include <stdio.h>

int main()
{
	FILE *p1;
	FILE *p2;
	char ch;	
	printf("Now I am going to show you how to copy the contents of a file into another file.\n");
	p1 = fopen("story.txt", "r");
	p2 = fopen("copy.txt", "w");
	while((ch=getc(p1)) != EOF)	//while((fscanf(p1, "%c")) != EOF)
	{
		fprintf(p2, "%c", ch);
	}
	printf("Contents copyed from one file to another\n");
	
return 0;	
}
