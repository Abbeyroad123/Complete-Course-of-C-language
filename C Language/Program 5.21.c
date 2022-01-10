#include <stdio.h>

int main()
{
	int time, hour, minutes, second;
	printf("Now I am going to write a program to convert time in seconds to hours, minutes and seconds.\n");
	printf("What is the time in seconds?\n");
	scanf("%d", &time);
	hour = time/3600;
	time = time%3600;
	minutes = time/60;
	time = time%60;
	second = time;
	printf("Time is %d hours %d minutes %d seconds", hour, minutes, second);
	
return 0;	
}
