#include <stdio.h>
#include <math.h>

int main()
{
	int no=0;
	int a, b;
	printf("Now I am going to give you armstrog numbers between 1 and 500\n");
	for(i=1; i<501; i++)
	{
		no = no + i;
		if(no>=1 && no<=9)
		{
			if(no == pow(no,3))
			{
				printf("%d is an Armstrong no.\n", no);
			}
		}
		else if(no>=10 && no<=99)
		{
			a = no%10;
			b = no/10;
			if(pow(no,3) == pow(a,3)+pow(b,3))
			{
				printf("%d is an Armstrong no.\n");
			}
		}
		else if(no>=100 && no<=500)
		{
			c = no%10;
			d = no/10;
			e = d%10;
			f = d/10;
			3if(pow(n, 3) == pow(c,3)+pow(e,3)+pow(f,3))
			{
				printf("%d is an Armstrong no\n", no);
			}
		}
				
	}	
	
return 0;	
}
