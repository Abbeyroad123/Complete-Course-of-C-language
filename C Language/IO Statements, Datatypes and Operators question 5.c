#include <stdio.h>

int main()
{
	int c;
	double f;
	printf("Temparature in Celsius:\n");
	scanf("%d", &c);
	f = (double)(9*c)/5 + 32.0;	
	printf("Temparature in Fahrenheit is %.1lfF", f);

return 0;	
}
