#include <stdio.h>

int main()
{
	int no;
	int factorial=1;
	printf("Please enter the no.\n");
	scanf("%d", &no);
	
	for(i=0; i<no; i++)
	{
		if(i==0)
		{
			factorial == 1;
		}
		factorial = factorial*(i+1);
	}
	priintf("%d! = %d", no, factorial)
	
return 0;	
}
