// To show that range of short int is -32,768 to 32,767
#include <stdio.h>

int main()
{
    int i;
	printf("Now I am going to show you that range of short int is -32,768 to 32,767\n");
	for(i=0; i<10; i++)
	{
		int no;
		printf("%hi\n", 32762+i); // %hi refers to unsigned short int
	}
	
return 0;	
}
