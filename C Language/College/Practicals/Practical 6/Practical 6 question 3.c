#include <stdio.h>

int main()
{
	int a = 2;
	double b = 6.78;
	char c = 'k';
	printf("Now I am going to write a program to check the size of various pointer variables for int, char, float.\n");
	int * aAdr = &a;
	double * bAdr = &b;
	char * cAdr = &c;
	printf("The size of a pointer varaible for int is = %zu\n", sizeof(aAdr));
	printf("The size of a pointer varaible for double is = %zu\n", sizeof(bAdr));
	printf("The size of a pointer varaible for char is = %zu\n", sizeof(cAdr));
	
return 0;	
}
