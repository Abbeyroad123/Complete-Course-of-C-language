#include <stdio.h>

int main()
{
	char ch;
	printf("Please enter the character.\n");
	scanf("%c", &ch);
	if(ch>=65 && ch<=90)
	{
		printf("Character is a CAPITAL letter.\n");
	}
	else if(ch>=65 && ch<=90)
	{
		printf("Character is a CAPITAL letter.\n");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("Character is a small letter.\n");
	}
	else if(ch>=48 && ch<=57)
	{
		printf("Character is a digit.\n");
	}
	else if((ch>=0 && ch<=47) || ch>=58 && ch<=64) || ch>=91 && ch<=96) || ch>=123 && ch<=127))
	{
		printf("Character is a special symbol.\n");
	}
	else 
	{
		printf("You have not entered a character!\n");
	}

return 0;			
}
