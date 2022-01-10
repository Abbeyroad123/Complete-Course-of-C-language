#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	double root1, root2;
	printf("Enter the values of a,b,c :\n");
	scanf("%d %d %d", &a, &b, &c);
	root1 = (-1*b+sqrt(pow(b,2) - 4*a*c))/2*a;	
	root2 = (-1*b-sqrt(pow(b,2) - 4*a*c))/2*a;	
	printf("The roots are:\n");
	printf("root1 = %.1lf\n", root1);
	printf("root2 = %.1lf", root2);
	
return 0;	
}
