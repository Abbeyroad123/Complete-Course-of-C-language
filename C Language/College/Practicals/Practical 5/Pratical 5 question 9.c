#include <stdio.h>

int main()
{
	int a, b, c=0, d=0, i, j, k, l, m=0, v=0, length, n, p, q, r, s, t, u;
	double list1[51];
	double list2[51];
	double intersection[51];
	printf("Now I am going to find union and intersection of elements of 2 arrays.\n");
	
	printf("Please enter how many elements do you want in the first array.\n");
	scanf("%d", &a);
	printf("Now start entering the elements of the array.\n");
	for(i=0; i<a; i++)
	{
		scanf("%lf", &list1[i]);
	}
	
	printf("Please enter how many elements do you want in the second array.\n");
	scanf("%d", &b);
	printf("Now start entering the elements of the array.\n");
	for(j=0; j<b; j++)
	{
		scanf("%lf", &list2[j]);
	}
	
	printf("Now I am going to write intersection of the 2 arrays.\n");
	for(k=0; k<a; k++)
	{
		for(l=0; l<b; l++)
		{
			if(list1[k] == list2[l])
			{
				intersection[m] = list1[k];
				printf("%.2lf ", list1[k]);
				m++;
			}
		}
	}
	while(intersection[v] != '\0')
	{
		v++;
	}
	length = v;
	printf("length = %d\n", length);
	printf("\nNow I am going to write the union of two arrays.\n");
		for(n=0; n<a; n++)
		{
			for(p=0; p<length; p++)
			{
				if(list1[n] != intersection[p])
				{
					c = 1;
				}
				else
				{
					c = 0;
					break;
				}
			}
			if(c == 1)
		    {
			    printf("%.2lf ", list1[n]);
		    }
		}
		
	
		for(s=0; s<b; s++)
		{
			for(t=0; t<length; t++)
			{
				if(list2[s] != intersection[t])
				{
					d = 1;
				}
				else
				{
					d = 0;
					break;
				}
			}
			if(d == 1)
		    {
			    printf("%.2lf ", list2[s]);
		    }
		}	
		
	
	
	if(length>0)
	{
		for(u=0; u<length; u++)
		{
			printf("%.2lf ", intersection[u]);
		}
	}

return 0;	
}
