#include <stdio.h>

int main()
{	
	int i, total;
	char first[20];
	char last[20];
	scanf("%d", &total);
	for(i=0; i<total; i++)
	{
		scanf("%s", first);
		scanf("%s", last);
		printf("%s %s\n", last, first);
	}	
	
return 0;	
}

/*
#include <stdio.h>

int main()
{
	int no;
	int i;
	char first_name[101];
	char last_name[101];
	scanf("%d", &no);
	for(i=0; i<no; i++)
	{
		scanf("%s %s", first_name, last_name);
		printf("%s %s\n", last_name, first_name);
	}

return 0;	
}
*/
