#include <stdio.h>

int main()
{ 	   
	int no, teams, left;
	printf("Number of students:\n");
	scanf("%d", &no);
	printf("Number of teams:\n");
	scanf("%d", &teams);
	//No of students in each group is 7
	left = no%7;
	printf("The number of students in each team is 7 and left out is %d", left);
	
return 0;
}
