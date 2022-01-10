// Pogram to find factorial of a no
#include <stdio.h>

int main()
{
	int no, i, factorial=1;
	printf("Of which number do you want the factorial of?\n");
	scanf("%d", &no);
	for(i=no; i>0; i--)
	{
		factorial = factorial*(i);
	}
	printf("Factorial(%d!) = %d", no, factorial);
	
return 0;	
}
