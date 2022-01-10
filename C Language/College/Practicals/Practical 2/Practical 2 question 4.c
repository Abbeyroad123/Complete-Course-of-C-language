#include <stdio.h>

int main()
{
	double a, b;
	printf("Now I am going to show you implementation of various assignment operators.\n");
	printf("First implementation of +=\n");
	printf("Please enter a no.\n");
	scanf("%lf", &a);
	printf("Now how much do you want to add in this number?\n");
	scanf("%lf", &b);
	a+=b;
	printf("Result: %.2lf\n", a);

	printf("Second implementation of -=\n");
	printf("Please enter a no.\n");
	scanf("%lf", &a);
	printf("Now how much do you want to subtract in this number?\n");
	scanf("%lf", &b);
	a-=b;
	printf("Result: %.2lf\n", a);
	
	printf("Third implementation of *=\n");
	printf("Please enter a no.\n");
	scanf("%lf", &a);
	printf("Now how much do you want to multiply in this number?\n");
	scanf("%lf", &b);
	a*=b;
	printf("Result: %.2lf\n", a);
	
	printf("Fourth implementation of /=\n");
	printf("Please enter a no.\n");
	scanf("%lf", &a);
	printf("Now how much do you want to divide in this number?\n");
	scanf("%lf", &b);
	a/=b;
	printf("Result: %.2lf\n", a);
	
return 0;	
}
