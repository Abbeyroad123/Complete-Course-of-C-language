#include <stdio.h>

int main()
{
    int i;
	int no;
	printf("How many letters do you want in the string?\n");
	scanf("%d", &no);
	char list[no];
	printf("Please enter a string.\n");
	for(i=0; i<no; i++)
	{
		scanf("%c", &list[i]);
	}		
	
	printf("Now use of atol() function.\n");
	long int num1 = atol(list);
	printf("%ld\n", num1);
	
	printf("Now use of atof() function.\n");
	int num2 = atof(list);
	printf("%d\n", num2);
	
return 0;	
}
