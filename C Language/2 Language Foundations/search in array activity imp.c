#include <stdio.h>

int main()
{
	int i = 0, total, even=0, odd=0, j, k, l, m, a, b, c, d;
	char word[51];
	scanf("%s", word);
	while(word[i] != '\0')
	{
		i++;
	}
	total = i;
	if(total%2 == 0)
	{
		even = 1;
	}
	else
	{
		odd = 1;
	}
	if(even==1)
	{
		for(j=0; j<total/2; j++)
		{
			if(word[j]=='t' || word[j]=='T')
			{
				a = 1;
			}
		}
		for(k=0; k<total/2; k++)
		{
			if(word[k]=='t' || word[k]=='T')
			{
				b = 1;
			}
		}
	}
	else if(odd==1)
	{
		for(l=0; l<((total/2)+1); l++)
		{
			if(word[l]=='t' || word[l]=='T')
			{
				c = 1;
			}
		}
		for(m=0; m<total/2; m++)
		{
			if(word[m]=='t' || word[m]=='T')
			{
				d = 1;
			}
		}
	}
	
	if(a == 1 || c == 1)
	{
	    printf("%d", 1);
	}
	else if(b == 1 || d == 1)
	{
	    printf("%d", 2);
	}
	else 
	{
		printf("%d", -1);
	}

return 0;	
}
