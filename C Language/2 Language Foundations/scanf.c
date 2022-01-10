#include <stdio.h>

int main()
{
	char str[10];
	printf("Enter Something\n");
	scanf("%15[^abcd]s", str);
	printf("%s", str);
	
return 0;	
}
