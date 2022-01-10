#include <stdio.h>

int main()
{
	int i;
	double no, convert; 
	char unit;
	int total;
	scanf("%d", &total);
	for(i=0; i<total; i++)
	{
		scanf("%lf %c", &no, &unit);
		if(unit == 'm')
		{
			convert = 3.2808 * no;
			printf("%lf ft\n", convert);
		}
		 else if(unit == 'g')
		{
			convert = 0.002205 * no;
			printf("%lf lbs\n", convert);
		}
		else if(unit == 'c')
		{
			convert = (1.8 * no) + 32;
			printf("%lf f\n", convert);
		}
	}	

return 0;	
}
