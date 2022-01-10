#include <stdio.h>

int main()
{
	int a, b, c, d, i, hcf, gcd;
	printf("Now I am going to show you how to find HCF or GCD of two given no.s\n");
	printf("Please enter the first no.\n");	
	scanf("%d", &a);	
	printf("Please enter the second no.\n");	
	scanf("%d", &b);
	if(a>b) 
	{
		c=1;
	}
	else
	{
		d=1;
	}
	
	if(c == 1)
	{
		for(i=1; i<=a; i++)
		{
			if(a%i == 0 && b%i == 0)
			{
				hcf = i;
			}
		}
		printf("The HCF of given two no is %d", hcf);
	}
	else if(d == 1)
	{
		for(i=1; i<=b; i++)
		{
			if(a%i == 0 && b%i == 0)
			{
				gcd = i;
			}
		}
		printf("The HCF of given two no is %d", gcd);
	}
	
return 0;	
}
