#include <stdio.h>

int main()
{
	int no;
	int i;
	int a, b;
	printf("Please enter the no.\n");
	scanf("%d", &no);	
	for(i=2; i<no; i++)	
	{
		if(no%i == 0)
		{
		    a=1;
		}
		else
		{ 
		    b=1;
		}
	}
	if(a==1)
	{
	    printf("The no %d is not a prime no", no);
	}
	else if(b==1)
	{
	    printf("The no %d is a prime no", no);
	}
	

return 0;	
}
