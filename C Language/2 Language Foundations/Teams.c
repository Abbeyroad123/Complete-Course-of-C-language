#include <stdio.h>

int main()
{
	int i, total, weight1=0, weight2=0;
	scanf("%d", &total);
	int player1[total];
	int player2[total];
	for(i=0; i<total; i++)
	{
		scanf("%d", &player1[i]);
		scanf("%d", &player2[i]);
		weight1 = weight1 + player1[i];
		weight2 = weight2 + player2[i];
	}
	if(weight1 > weight2)
	{
		printf("Team 1 has an advantage\n");
	}
	else
	{
		printf("Team 2 has an advantage\n");	
	}
	printf("Total weight for team 1: %d\n", weight1);
	printf("Total weight for team 2: %d\n", weight2);
	
return 0;	
}

/*
#include <stdio.h>

int main()
{
	int teams=0, i=0, aa=0, bb=0, suma=0, sumb=0, result=0;
	scanf("%d", &teams);
	for(i=0; i<teams; i++)
	{
		scanf("%d", &aa);
		scanf("%d", &bb);
		suma = suma +aa;
		sumb = sumb +bb;
	}
	result = suma > sumb;
	if(result)
	{
		printf("Team 1 has an advantage\n");
	}
	else
	{
		printf("Team 2 has an advantage\n");
	}
	printf("Total weight for team 1: %d\n", suma);
	printf("Total weight for team 2: %d\n", sumb);
	
return 0;	
}
*/
