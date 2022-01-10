#include <stdio.h>

int main()
{
    int year;
	printf("Now I am going to write a program to determine whether a year is a leap year or not.\n");
	printf("Please enter an year.\n");
	scanf("%d", &year);
	if(year%4 == 0 && year%100!=0)
	{
			printf("The year %d is a leap year.", year);
	}
	else if(year%400 == 0)
	{   
	 	printf("The year %d is a leap year(it has 366 days).\n", year);   
	}
	else
	{
		printf("The year %d is not a leap year.\n", year);
	}
	
return 0;	
}
