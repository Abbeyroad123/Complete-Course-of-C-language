#include <stdio.h>
const float pi = 3.14;

int main()
{
	double r;
	printf("Now I am going to find the area and circumference of a circle\n");
	printf("Enter the value of radius:\n");	
	scanf("%lf", &r);
	printf("The circumference of circle is = %lf\n", 2*pi*r);
	printf("The area of circle is = %lf\n", pi*r*r);
	
return 0;	
}
