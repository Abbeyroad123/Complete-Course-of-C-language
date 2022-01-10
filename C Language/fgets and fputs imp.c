#include <stdio.h>

int main()
{
	char word[10];
	printf("Please enter a string.\n");
	fgets(word, sizeof(word), stdin);
	puts(word);
	printf("The string entered is:\n");
	fputs(word, stdout);	
	
return 0;	
}
