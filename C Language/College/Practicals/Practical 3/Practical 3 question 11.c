#include <stdio.h>

int main()
{
    int no;
	printf("Please start entering integers.\n");
	scanf("%d", &no);
	while(no <= 100)
	{
		scanf("%d", &no);
	}
	printf("Loop Terminated\n");
	
return 0;	
}
