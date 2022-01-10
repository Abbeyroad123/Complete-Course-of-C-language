#include <stdio.h>

int main()
{
	int no, times, i=1;
	printf("Now I am going to show you how to print a table of a number by do-while statement.\n");
	printf("Enter the number of which you want table of:\n");
	scanf("%d", &no);		
	printf("Till how many numbers do you want the table.\n");
	scanf("%d", &times);	
	do
	{
		printf("%d * %d = %d\n", no, i, no*i);
		i = i + 1;
	}
	while(i<=times);
	
return 0;	
}
