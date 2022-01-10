#include <stdio.h>

int main()
{
	int a, b, i=1, no;
	int t=1;
	int lcm;
	printf("Now I am going to show you how to find LCM of two given numbers/\n");
	printf("Please enter the first number.\n");
	scanf("%d", &a);
	printf("Please enter the second number.\n");
	scanf("%d", &b);
		
	while(t != 0)
	{
		no = a*i;
		if(no%b == 0)
		{
			lcm = no;
			t = 0;	
		}	
		i = i + 1;
	}		
	printf("The LCM of given no is %d", lcm);	

return 0;	
}
