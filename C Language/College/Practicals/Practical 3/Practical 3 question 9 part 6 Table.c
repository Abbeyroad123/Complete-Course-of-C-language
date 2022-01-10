#include <stdio.h>

int main()
{
	int no, a, i;
	printf("What is the no of which you want the table of?\n");
	scanf("%d", &no);
	printf("Till hoy many no do you want the table to be?\n");
	scanf("%d", &a);	
	for(i=1; i<=a; i++)
	{
		printf("%d * %d = %d\n", no, i, no*i);
	}
	
return 0;	
}
