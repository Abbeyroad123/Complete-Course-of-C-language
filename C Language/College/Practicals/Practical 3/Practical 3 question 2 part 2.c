#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter 3 integers of whom I have to find the largest.\n");
	scanf("%d %d %d", &a, &b, &c);
	a>b && a>c  ? printf("%d is greatest", a)
				: b>a && b>c ? printf("%d is greatest", b)
							 : c>a && c>b ? printf("%d is greatest", c)
							 			  : printf("Either any 2 or all 3 integers are equal");
	
return 0;								 			  
}
