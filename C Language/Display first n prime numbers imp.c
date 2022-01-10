#include <stdio.h>

int main()
{
	int no=2;
	int i, a=0, b=0, total, c=0;
	printf("How many prime numbers do you want?\n");	
	scanf("%d", &total);
	while(c < total)
	{
		if(no == 2)
		{
			printf("No %d is a prime no.\n", 2);
			c = c + 1;
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
		if((b==1) && (a==0))
		{
		    printf("No %d is a prime no.\n", no);
		    c = c+1;
		}
		a = 0;
		b = 0;
		no = no + 1;
	}
	
return 0;	
}
