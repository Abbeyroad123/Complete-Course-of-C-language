#include <stdio.h>

int main()
{
	int no;
	int i;
	int factorial = 1;
	scanf("%d", &no);
	for(i=1; i<=no; i++)
	{
		factorial = factorial * i;
	}
	if(no<0)
	{
        printf("%d is negative! Aborting..\n", no);
    }
	else
	{
        printf("%d! = %d.\n", no, factorial);
    }
	
return 0;	
}
