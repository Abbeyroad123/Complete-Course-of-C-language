#include <stdio.h>

int main()
{
	int pop;
	int inf=1;
	int total = 1;
	int day=1;
	scanf("%d", &pop);
	while(1)
	{
	    if(total >= pop)
	    {
	        break;
	    }
	    else
	    {
	        day = day + 1;
		    inf = inf*2;
		    total = total + inf;
	    }
	}
	printf("%d", day);
	
return 0;	
}
