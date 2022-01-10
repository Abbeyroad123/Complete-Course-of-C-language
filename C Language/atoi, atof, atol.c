#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[51];
    int a;
    float b;
    long c;
	printf("Enter a string(numbers only).\n");
	scanf("%s", word);
	// Converting string to int
	a = atoi(word);
	printf("The Equivalent of string %s in int is %d\n", word, a);
	// Converting string to float
	b = atof(word);
	printf("The Equivalent of string %s in float is %f\n", word, b);
	// Converting string to long
	c = atol(word);
	printf("The Equivalent of string %s in long is %ld\n", word, c);
			
return 0;	
}
