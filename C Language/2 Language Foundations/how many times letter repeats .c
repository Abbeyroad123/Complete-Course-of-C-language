#include <stdio.h>

int main()
{
	int i=0;
	int j, k, swap;
	int m;
	int no;
	int repeat=0;
	char list[51];
	scanf("%s", list);
	while(list[i] != '\0')
	{
		i++;
	}
	no = i;
	// Now length of word or no of letters is equal to i.
	for(j=0; j<no-1; j++)
	{
		for(k=0; k<no-1; k++)
		{
			if(list[k]>list[k+1])
			{
				swap=list[k];
				list[k] = list[k+1];
				list[k+1] = swap;
			}
		}
	}
	m=0;
	while(m<no-1)
	{
		if(list[m] == list[m+1])
		{
			repeat = repeat + 1;
		}
	}
	printf("%d", repeat);
	
return 0;	
}
