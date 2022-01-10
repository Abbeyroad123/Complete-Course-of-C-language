// In typecasting round-off or estimation doesn't take place but in %.2lf estimation does take place
#include <stdio.h>

int main()
{
	int c;
	double a=10.6, b=11.7;
	c = (int)(a + b);	// Value of a+b(which is a double) is typecasted into int -- Fraction part is truncated and not estimated
	printf("Sum = %d", c);
	
return 0;	
}

/*
#include <stdio.h>

int main()
{
	double a=10.6, b=11.7, c;
	c = a+b;
	printf("Sum = %.0lf", c);
	
return 0;	
}
*/
