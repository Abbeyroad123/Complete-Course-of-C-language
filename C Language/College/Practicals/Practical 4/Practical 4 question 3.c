#include <stdio.h>

int main()
{
	int no;
	int i, a=0, b=0;
	printf("Now I am going to show you whether a no is prime or not.\n");
	printf("Please enter the no.\n");
	scanf("%d", &no);
	if(no<=0)
	{
		printf("Please select a positive no.\n");
	}
	else
	{
		if(no == 2)
		{
			printf("No is a prime no.\n");
		}
		for(i=2; i<no; i++)
		{
			if(no%i == 0)
			{
				a = 1;
			}
			else
			{
				b = 1;
			}
		}	
	}
	
	if (a==1)
	{
	    printf("No is a not prime no\n");
	}
	else if(b==1)
	{
	    printf("No is a prime no.\n");
	}
	
		
return 0;	
}
