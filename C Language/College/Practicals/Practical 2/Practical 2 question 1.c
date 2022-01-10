#include <stdio.h>
#include <math.h>
# define PI 3.14
int main()
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;
	double g;
	double h;
	printf("What is the value of THETA(in degrees) for which you want to calculate sin of ?\n");
	scanf("%lf", &a);
	b = (a/180) * PI;
	printf("The value of sin is %.2lf\n", sin(b));

	printf("What is the value of THETA(in degrees) for which you want to calculate cos of ?\n");
	scanf("%lf", &c);
	d = (c/180) * PI;
	printf("The value of cos is %.2lf\n", cos(d));	
	
	printf("Of which no do you want to calculate natural log of ? (base of lig is e)\n");
	scanf("%lf", &e);
	printf("The value of log: %.2lf\n", log(e));
	
	printf("What is the base of no of which you want to calculate power?\n");
	scanf("%lf", &f);
	printf("What is the power?\n");
	scanf("%lf", &g);
	printf("Value: %.2lf\n", pow(f,g));
	
	printf("Which number's square root do you want ? \n");
	scanf("%lf", &h);
	printf("Value of sqaure root: %.2lf \n", sqrt(h));
	
return 0;	
}
