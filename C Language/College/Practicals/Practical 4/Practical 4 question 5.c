#include <stdio.h>

int main()
{
	int a, b, hcf=0, i, j;
	printf("Now I am going to tell you HCF of two numbers.\n");
	printf("Please enter the first no.\n");
	scanf("%d", &a);	
	
	printf("Please enter the second no.\n");
	scanf("%d", &b);
	
	if(a>b)
	{
		for(i=1; i<=b; i++)
		{
			if(a%i == 0 && b%i == 0)
			{
				hcf = i;
			}
		}
		printf("HCF: %d", hcf);
	}
	else if(b>a)
	{
		for(j=1; j<=a; j++)
		{
			if(a%j == 0 && b%j == 0)
			{
				hcf = j;
			}
		}
		printf("HCF: %d", hcf);
	}

return 0;	
}
