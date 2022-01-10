#include <stdio.h>

int main()
{
	double x1, x2, y1, y2;
	printf("X1\n");
	scanf("%lf", &x1);	
	printf("Y1\n");
	scanf("%lf", &y1);
	printf("X2\n");
	scanf("%lf", &x2);
	printf("Y2\n");
	scanf("%lf", &y2);			
	printf("Binoy's house is located at (%.1lf,%.1lf)", (x1+x2)/2, (y1+y2)/2);
	
return 0;	
}
