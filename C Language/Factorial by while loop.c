#include <stdio.h>

int main()
{
	int no, factorial=1;
	printf("Of which number do you want the factorial of?\n");
	scanf("%d", &no);
	int i=no;
	while(i>0)
	{
		factorial = factorial*i;
		i--;
	}
	printf("Factorial(%d!) = %d", no, factorial);
	
return 0;	
}
