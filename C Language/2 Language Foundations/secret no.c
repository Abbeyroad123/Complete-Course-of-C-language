#include <stdio.h>

int main()
{
	int secret, no;
	int try=0;
	scanf("%d", &secret);
	while(1)
	{
		try = try +1 ;
		scanf("%d", &no);
		if(no<secret)
		{
			printf("it is more\n");
		}
		else if(no>secret)
		{
			printf("it is less\n");
		}
		else
		{
			break;
		}
	}
	printf("Number of tries needed: \n %d", try);
	
return 0;	
}
