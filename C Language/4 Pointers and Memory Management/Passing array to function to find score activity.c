#include <stdio.h>
void behind(int *, int);

int main()
{
	int total, i;
	printf("What is the no players participating in the game?\n");
	scanf("%d", &total);
	int score[total];
	for(i=0; i<total; i++)
	{
		scanf("%d", &score[i]);
	}
	behind(score, total);

return 0;	
}

void behind(int * ptr, int no)
{
	int j, k, result;
	int max = ptr[0];
	for(j=0; j<no; j++)
	{
		if(ptr[j+1] > ptr[j])
		{
			max = ptr[j+1];
		}
	}
	result = max;
	for(k=0; k<no; k++)
	{
		printf("%d", result - ptr[k]);
	}
}

/*
#include <stdio.h>
void behind(int *, int);

int main()
{
	int total, i;
	printf("What is the no players participating in the game?\n");
	scanf("%d", &total);
	int score[total];
	for(i=0; i<total; i++)
	{
		scanf("%d", &score[i]);
	}
	behind(score, total);

return 0;	
}

void behind(int * ptr, int no)
{
	int j, k;
	int max = *ptr;
	for(j=0; j<no; j++)
	{
		if(*(ptr + (j+1)) > *(ptr + j))
		{
			max = *(ptr + (j+1));
		}
	}
	
	for(k=0; k<no; k++)
	{
		*(ptr + k) = max - *(ptr + k);
	}
}
*/
