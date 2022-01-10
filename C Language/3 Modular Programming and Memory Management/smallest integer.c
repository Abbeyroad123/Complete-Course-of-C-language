#include <stdio.h>
int min(int);
int main()
{
	int i;
	int total;
	int result=0;
	scanf("%d", &total);
	int no[total];
	for(i=0; i<total; i++)
	{
		scanf("%d", &no[i]);
		result = no[i];
		if(no[i+1] < no[i])	
		{
			result = no[i+1];
		}
	}
	printf("%d", result);	

return 0;	
}

