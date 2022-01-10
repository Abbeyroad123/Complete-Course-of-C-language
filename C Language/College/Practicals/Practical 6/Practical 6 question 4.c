#include <stdio.h>

int main()
{
    int i;
	int array1[5];
	float array2[5];
	char array3[5];
	int * Adr1 = array1;
	float * Adr2 = array2;
	char * Adr3 = array3;
	printf("Now I am going to write a program to verify the addresses of adjacent elements stored in an array of char, int, float.");	
	
	printf("First, I am going to write addresses of adjacments elements of array of type int.\n");
	for(i=0; i<5; i++)
	{
		printf("%p ", (array1 + i));
	}
	printf("\n");
	printf("First, I am going to write addresses of adjacments elements of array of type float.\n");
	for(i=0; i<5; i++)
	{
		printf("%p ", (array2 + i));
	}
	printf("\n");
	printf("First, I am going to write addresses of adjacments elements of array of type char.\n");
	for(i=0; i<5; i++)
	{
		printf("%p ", (array3 + i));
	}
	
return 0;	
}
