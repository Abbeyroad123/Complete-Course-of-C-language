#include <stdio.h>

int main()
{
	int marks[2] = {34, 53};
	int n;
	n = sizeof(marks) / sizeof(int);	// n = sizeof(marks) / sizeof(marks[0]);
	printf("%d stored at %p\n", marks[0], &marks[0]);	
	printf("%d stored at %p\n", marks[1], &marks[1]);
	printf("n=%d\n", n);
	
return 0;	
}
