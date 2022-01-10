#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d;
	double root1, root2;
	printf("Let the quadratic eqn be ax^2+bx+c=0\n");
	printf("Please enter the values of a, b and c respectively: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = ((b*b) - 4*a*c);
	if(d>=0)
	{
		root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
		root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
		printf("The roots of the quadratic equation are: %.2lf and %.2lf", root1, root2);
	}
	else if(d<0)
	{
		printf("This function has no real roots.");
	}

return 0;	
}
