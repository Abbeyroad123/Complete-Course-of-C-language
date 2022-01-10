#include <stdio.h>

int main()
{
	// sizeof(type) yields the storage size of the object or type in bytes.
    printf("Size of int = %lu\n", sizeof(int));
	printf("Size of float = %zu\n", sizeof(float));
	printf("Size of double = %zu\n", sizeof(double));
	printf("Size of long double = %zu\n", sizeof(long double));
	printf("Size of short = %zu\n", sizeof(short));
	printf("Size of long int = %zu\n", sizeof(long int));
	printf("Size of short int = %zu\n", sizeof(short int));
	printf("Size of unsigned long int = %zu\n", sizeof(unsigned long int));
	printf("Size of signed long int = %zu\n", sizeof(signed long int));
	printf("Size of char = %zu\n", sizeof(char));
	printf("Size of unsigned char = %zu\n", sizeof(unsigned char));
	printf("Size of signed char = %zu\n", sizeof(signed char));
	printf("Size of void = %zu\n", sizeof(void));
	
return 0;	
}
