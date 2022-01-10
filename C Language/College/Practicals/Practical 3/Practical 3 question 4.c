#include <stdio.h>

int main()
{
	int month_no;
	printf("Please enter the month no.(like 1 for january, 2 for february, 3 for march and so on till 12 for december)");
	scanf("%d", &month_no);
	switch(month_no)
	{
		case 1:
			printf("Month is JANUARY");
		break;
		case 2:
			printf("Month is FEBRUARY");
		break;
		case 3:
			printf("Month is MARCH");
		break;
		case 4:
			printf("Month is APRIL");
		break;
		case 5:
			printf("Month is MAY");
		break;
		case 6:
			printf("Month is JUNE");
		break;
		case 7:
			printf("Month is JULY");
		break;
		case 8:
			printf("Month is AUGUST");
		break;
		case 9:
			printf("Month is SEPTEMBER");
		break;
		case 10:
			printf("Month is OCTOBER");
		break;
		case 11:
			printf("Month is NOVEMBER");
		break;
		case 12:
			printf("Month is DECEMBER");
		break;
		default:
		printf("User entered INVALID OPTION!");	
	}
	
return 0;	
}
