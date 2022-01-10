#include <stdio.h>

int main()
{
	char a='n';
	char b='t';
	char c='b';
	printf("Now I am going to show you use of different escape sequences.\n");
	printf("First use of \%c \n", a);
	printf("Hello! \nHow are you?\n");
	
	printf("First use of \%c \n", b);
	printf("Hello! \t How are you?\n");
	
	printf("First use of \%c \n", c);
	printf("Hello! \b How are you?\n");

return 0;	
}
