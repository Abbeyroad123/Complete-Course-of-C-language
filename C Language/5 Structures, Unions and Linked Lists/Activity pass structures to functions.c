#include <stdio.h>

struct date 
	{
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) 
{
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

void readDate(struct date * dateptr) 	// the name of pointer variable is dateptr
{
	printf("Enter the year.\n");
	scanf("%d", &(*dateptr).year);
	printf("Enter the month.\n");
	scanf("%d", &(*dateptr).month);
	printf("Enter the day.\n");
	scanf("%d", &(*dateptr).day);
}

void printDate(struct date today)
{
	printf("%02d/%02d/%d", today.month, today.day, today.year);
}
