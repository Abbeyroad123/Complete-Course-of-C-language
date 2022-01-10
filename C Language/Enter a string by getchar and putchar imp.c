#include <stdio.h>

int main()
{
    int i=0;
    char ch[51];
	printf("Enter a string.\n");
	while((ch[i] = getchar()) != '\n')
	{
		i++;	
	}	
	int length = i;
	printf("The string entered is:\n");
	i=0;
	while(i<length)
	{
		putchar(ch[i]);
		i++;
	}
	
return 0;	
}
