#include <stdio.h>

int main()
{
	int i, a=0, b=0, c=0, result=0;
	int length=0;
	char type;
	int no;
	scanf("%d", &no);
	for(i=0; i<no; i++)
	{
		scanf("%d %c", &length, &type);
		if(type == 'i')
		{
			a = length*4;
		}
		else if(type == 'c')
		{
			b = length*1;
		}
		else if(type == 'd')
		{
			c = length*8;
		}
		else
		{
			break;
		}
	}
	if(type=='i' || type=='c' || type =='d')
	{
	    result = a+b+c;
	    printf("%d bytes", result);
	}
	else
	{
	   	printf("Invalid tracking code type"); 
	}
return 0;	
}
