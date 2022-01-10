#include <stdio.h>

int main()
{
	int a;
	double b;
	char c;
	printf("Now I am going to show you how to print the address/values of different variables.\n");
	printf("What is the value of integer a?\n");
	scanf("%d", &a);
	printf("What is the value of double b?\n");
	scanf("%lf", &b);
	printf("What is the value of character c?\n");
	scanf(" %c", &c);

	int * aAdr = &a;
	double * bAdr = &b;
	char * cAdr = &c;

	printf("The address of a: %p\n", aAdr);
	printf("The value of a: %d\n", *aAdr);

	printf("The address of b: %p\n", bAdr);
	printf("The value of b: %.2lf\n", *bAdr);
	
	printf("The address of c: %p\n", cAdr);
	printf("The value of c: %c\n", *cAdr);

return 0;	
}
