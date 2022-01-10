#include <stdio.h>
#include "program.h"

int main(void)
{
	printf("Program to illustrate working with multiple files\n");
	printf("Now I am going to show you how to swapt two vaiables without a temp variable\n");
	printf("What is the first variable?\n");
	scanf("%lf", &a);
	printf("What is the second variable?\n");
	scanf("%lf", &b);
	program(a, b);
		
return 0;	
}
