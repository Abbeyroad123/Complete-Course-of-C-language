// Use of field width in scanf
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the values of a, b, c\n");
	scanf("%2d%2d%2d", &a, &b, &c);
	printf("a = %d, b=%d, c = %d", a, b, c);
	
return 0;	
}

/*
// Use of field width in scanf
#include <stdio.h>

int main()
{
	short int a;
	double b;
	printf("Enter the values of a, b, c\n");
    scanf("%hd %le", &a, &b);
    printf("a = %hd\n", a);
    printf("b=%le", b);
	
return 0;	
}
*/
