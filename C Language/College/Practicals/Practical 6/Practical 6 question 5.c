#include <stdio.h>

void swap(int *,int *);

int main() 
{
    int a, b;
	printf("Now I am going to write a function to swap variables by using pointers and functions.\n");
	printf("Please enter the first variable.\n");
	scanf("%d", &a);
	printf("Please enter the second variable.\n");
	scanf("%d", &b);
    swap(&a,&b);
    printf("Value of first variable = %d\n", a);
    printf("Value of second variable = %d\n", b);

return 0;
}
void swap(int * x, int * y)
{	
    int tmp = * x;
    * x = * y;
    * y = tmp;
}
