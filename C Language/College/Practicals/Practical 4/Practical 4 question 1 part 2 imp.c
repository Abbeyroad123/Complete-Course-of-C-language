#include <stdio.h>
int main()
{
	double a, b;
    printf("Now I am going to show you how to swapt two vaiables without a temp variable\n");
	printf("What is the first variable?\n");
	scanf("%lf", &a);
	printf("What is the second variable?\n");
	scanf("%lf", &b);
 
    // Code to swap 'x' and 'y. Let x = 10 and y = 5
    a = a + b; // x now becomes 15
    b = a - b; // y becomes 10
    a = a - b; // x becomes 5
 	
	printf("Value of first variable: %.2lf\n", a);
	printf("Value of second variable: %.2lf\n", b);

return 0;
}
