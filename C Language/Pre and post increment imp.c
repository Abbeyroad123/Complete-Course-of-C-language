// Pre and post increment 
#include <stdio.h>

int main()
{
	int a=10, b=20, c;
	printf("a=%d and b=%d\n", a, b);
	c = a++;
	printf("Value of c=%d\n", c);
	printf("Value of a=%d\n", a);
	c = ++b;
	printf("Value of c=%d\n", c);
	
return 0;	
}
