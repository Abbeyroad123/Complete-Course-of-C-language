// To calculate the area of a right angled triangle
#include <stdio.h>

int main()
{
	int precision;
	double base, height, area;
	printf("Program to find area of a right-angled triangle.\n");
	printf("Enter the length of base:\n");
	scanf("%lf", &base);
	printf("Enter the length of height:\n");
	scanf("%lf", &height);
	area = (base*height)/2;
	printf("How much precision you want in the answer?\n");
	scanf("%d", precision);
	printf("Area of the right angled triangle = %.%dlf\n", precision, area);
	
return 0;	
}
/*
// To calculate the area of a right angled triangle
#include <stdio.h>

int main()
{
	double base, height, area;
	printf("Program to find area of a right-angled triangle.\n");
	printf("Enter the length of base:\n");
	scanf("%lf", &base);
	printf("Enter the length of height:\n");
	scanf("%lf", &height);
	area = (base*height)/2;
	printf("Area of the right angled triangle = %.2lf\n", area);
	
return 0;	
}
*/
