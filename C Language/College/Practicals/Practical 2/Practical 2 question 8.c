#include <stdio.h>

int main()
{
	printf("Now I am going to show you how to use sizeof() function to find size of char, integer, long int, float and double. \n");
	
	printf("Size of integer.\n");
	printf("%zu\n", sizeof(int));	
	
	printf("Size of character.\n");
	printf("%zu\n", sizeof(char));	
	
	printf("Size of long integer.\n");
	printf("%zu\n", sizeof(long int));	
	
	printf("Size of float.\n");
	printf("%zu\n", sizeof(float));	
	
	printf("Size of double.\n");
	printf("%zu\n", sizeof(double));
	
return 0;		
}
