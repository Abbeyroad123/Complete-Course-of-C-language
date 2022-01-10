#include <stdio.h>

int main()
{
	int i, no;
	int even = 0;
	printf("Please Enter 20 integers and \nI will tell you how many of them are even numbers.\n");
	for(i=0; i<20; i++)
	{
		scanf("%d", &no);
		if(no%2 == 0)
		{
			even = even + 1;
		}
	}
	printf("The no of even integers is: %d", even);
	
return 0;	
}
