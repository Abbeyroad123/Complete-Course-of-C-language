#include <stdio.h>

int main()
{
	char ch[21];
	int i=0;
	printf("Please enter a string: \n");
	while((ch[i] = getchar()) != '\n')
	{
		i++;
	} 
	int length = i;
	i=0;
	printf("Entered string is: \n");
	while(i<length)
	{
		putchar(ch[i]);
		i++;
	}
	
return 0;	
}
