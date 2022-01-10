#include <stdio.h>

struct date 
{
    int year;
    int month;
    int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) 
{
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	printf("\n");
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *todayptr)
{
	scanf("%d", &todayptr->year);
	scanf("%d", &todayptr->month);
	scanf("%d", &todayptr->day);
}

void printDate(struct date today)
{
	printf("%02d/%02d/%02d", today.month, today.day, today.year);
}

struct date advanceDay(struct date today)
{
	struct date tomorrow;
	if(today.month!=2 && today.month!=12)
	{
		if(today.day!=31)
		{
			tomorrow.day = today.day+1;	
			tomorrow.month = today.month;
		}
		if(today.day==31)
		{
			tomorrow.day = 1;
			tomorrow.month = today.month+1;
		}
		tomorrow.year = today.year;		
	}
	if(today.month==12)
	{
		if(today.day!=31)
		{
			tomorrow.day = today.day+1;	
			tomorrow.month = today.month;
			tomorrow.year = today.year;			
		}
		if(today.day==31)
		{
			tomorrow.day = 1;
			tomorrow.month = 1;
			tomorrow.year = today.year + 1;
		}
		
	}
	if(today.month==2)
	{
		if(today.day!=28)
		{
			tomorrow.day = today.day+1;	
			tomorrow.month = today.month;			
		}
		if(today.day==28)
		{
			tomorrow.day = 1;
			tomorrow.month = today.month + 1;
		}
		tomorrow.year = today.year;
	}
	return tomorrow;	
}
