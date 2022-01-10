#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter the numbers :\n");
	scanf("%d %d %d", &a, &b, &c);	
	(a>b)
		 ? (a>c)
		 		? printf("%d is the greatest number", a)	
		 		: printf("%d is the greatest number", c)
		 : printf("%d is the greatest number, b");
		 
return 0;	 

}
