#include <stdio.h>

int main()
{
	int no;
	int data=0, bytes=0, kilobytes=0, megabytes=0;
	char type;
	scanf("%c %d", &type, &no);
	if(type == 'i')
	{
		data = no*4;
		if(data<=999)
		{
			printf("%d B", data);
		}
		else if((data>999 && data<=999999))
		{
			bytes = data%1000;
			kilobytes = data/1000;
			printf("%d KB and %d B", kilobytes, bytes);
		}
		else if((data>999999 ))
		{
			bytes = data%1000;
			kilobytes = data%1000000 - 1000 * bytes;
			megabytes = data/1000000;
			printf("%d MB and %d KB and %d B", megabytes, kilobytes, bytes);
		}
	}
	else if(type == 'd')
	{
		data = no*8;
		if(data<=999)
		{
			printf("%d B", data);
		}
		else if((data>999 && data<=999999))
		{
			bytes = data%1000;
			kilobytes = data/1000;
			printf("%d KB and %d B", kilobytes, bytes);
		}
		else if((data>999999 ))
		{
			bytes = data%1000;
			kilobytes = data%1000000 - 1000* bytes;
			megabytes = data/1000000;
			printf("%d MB and %d KB and %d B", megabytes, kilobytes, bytes);
		}
	}	
return 0;	
}
