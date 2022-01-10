#include <stdio.h>

int main()
{
	int i;
	int no;
	int quantity[10];
	for(i=0; i<10; i++)
	{
		scanf("%d", &quantity[i]);
	}
	scanf("%d", &no);
	printf("%d", quantity[no]);
	
return 0;		
}

/*
#include <stdio.h>

int main()
{
	int array[10];
	int ingredient;
	int cell = 0;
	int i=0;
	int need;
	for(i=0; i<10; i++)
	{
		scanf("%d", &ingredient);
		array[cell] = ingredient;
		cell = cell + 1;
	}
	scanf("%d", &need);
	printf("%d", array[need]);

return 0;	
}
*/
