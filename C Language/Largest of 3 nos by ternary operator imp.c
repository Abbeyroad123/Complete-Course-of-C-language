#include <stdio.h>

int main()
{
	int a=10, b=12, c=11, max;
	max = (a>b) ?((a>c) ?a:c) : ((b>c) ?b:c);
	printf("%d", max);
	
return 0;	
}
