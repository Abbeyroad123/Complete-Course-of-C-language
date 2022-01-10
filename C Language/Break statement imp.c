#include <stdio.h>

int main()
{
	int i, j;
	for(i=1; i<=3; i++)
	{
		printf("Hello\n");
		for(j=1; j<=2; j++)
		{
			if(j%2 == 0)
			{
				break;	
			}		
			printf("Students\n");
		}
		printf("We are out of inner loop.\n");
	}		
	
return 0;	
}
