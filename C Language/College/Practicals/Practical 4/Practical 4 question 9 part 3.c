#include <stdio.h>

int summation(int);

int main()
{
	int no, value;
	printf("Now I am going to show you summation of first n natural numbers.\n");
	printf("Upto which number do want the summation of ?\n");
	scanf("%d", &no);
	if(no<0)
	{
		printf("Please enter a positive no. Aborting!\n");
	}
	else
	{
		value = summation(no);
		printf("Summation of first %d natural numbers = %d\n", no, value);
	}
	
return 0;	
}

int summation(no)
{
	int result;
	if(no==1)
	{
		result = 1;
	}
	else
	{
	result = no + summation(no-1);		
	}

return result;	
}
