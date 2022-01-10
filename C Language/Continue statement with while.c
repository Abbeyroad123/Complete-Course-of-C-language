#include <stdio.h>

int main()
{
	int i=0;
	while(i<10)
	{
		i++;
		if(i%2 == 0)
		{
			continue; 	// First continue increases the value if i by 1 and check whether it satisfies the condition (i<10) or not
		}
		else
		{
			printf("%d \n", i);
		}
		printf("Hello Students\n");
	}	
	
return 0;	
}
