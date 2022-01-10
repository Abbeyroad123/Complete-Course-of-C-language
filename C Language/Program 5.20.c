#include <stdio.h>

int main()
{
	int basic;
	double dear, house;
	printf("What is your basic allowance?\n");
	scanf("%d", &basic);
	dear = 0.4*(double)basic;// dearness allowance
	house = 0.2*(double)basic;// house rent	
	printf("Your dearness allowance = %.2lf rupees\n", dear);
	printf("Your house rent = %.2lf rupees\n", house);
	printf("Your gross salary = %.2lf\n", basic+dear+house);
	
return 0;	
}
