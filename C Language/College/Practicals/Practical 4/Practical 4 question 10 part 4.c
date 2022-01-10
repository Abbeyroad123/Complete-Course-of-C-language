#include <stdio.h>

char getcharacter(); 	// Means return type of the function is char and has no parameters

int main()
{
	char value;
	printf("Now I am going to show you various return types like void, int, float, char etc.\n");
	printf("Now you are going to input a charcter by help of function called getcharacter and use return type char\n");
	value = getcharacter();	
	printf("The character you enetered is %c\n", value);
	
return 0;	
}

char getcharacter()
{
	char result;
	printf("Please enter a character.\n");
	scanf("%c", &result);
		
return result;		
}
