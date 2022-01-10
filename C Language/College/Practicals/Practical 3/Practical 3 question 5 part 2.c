#include <stdio.h>

int main()
{
	int no;
	printf("Please enter the no,\n");
	scanf("%d", &no);
	no%2==0 ? printf("The no is even no\n")
			: printf("The no is odd no\n");
	no>=0 ? printf("The no is positive no\n")
		  : printf("The no is negative no\n");	
		  
return 0;		  
}
