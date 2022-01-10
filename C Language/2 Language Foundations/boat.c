#include <stdio.h>

int main()
{
	int first, second, sum;
	scanf("%d", &first);	
	scanf("%d", &second);
	sum = first + second;
	if(sum>=10)
	{
		printf("Special tax \n %d", 36);
	}
	else
	{
		printf("Regular tax \n %d", sum*2);
	}
	
return 0;	
}
