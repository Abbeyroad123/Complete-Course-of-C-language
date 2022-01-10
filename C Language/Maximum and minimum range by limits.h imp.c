// To display maximum and minimum range of some data types
#include <stdio.h>
#include <limits.h>
int main()
{
	printf("Maximum value of int = %d\n", INT_MAX);
	printf("Minimum value of int = %d\n", INT_MIN);
	printf("Maximum value of unsigned int = %u\n", UINT_MAX);
	// printf("Minimum value of unsinged int = %i\n", UINT_MIN); NOT DEFINED or UNDECLARED
	printf("Maximum value of long int = %ld\n", LONG_MAX);
	printf("Minimum value of long int = %ld\n", LONG_MIN);
	
return 0;	
}
