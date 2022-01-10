#include <stdio.h>

int main()
{
	int no;
	int i;
	int j;
	int l;
	int m=0;
	int max=0;
	scanf("%d", &no);
	char word[101];
	int bada[no];
	for(i=0; i<no; i++)
	{
		scanf("%s", word);
		j=0;
		while(word[j] != '\0')
		{
			j++;
		}
		bada[i] = j;
	}
	for(l=0; l<no; l++)
	{
		if(bada[l+1]>bada[l])
		{
			max=bada[l+1];
		}
		else
		{
			m++;
		}
	}
	printf("%d", max);
return 0;	
}
