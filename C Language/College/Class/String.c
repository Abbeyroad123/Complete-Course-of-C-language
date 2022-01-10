#include <stdio.h>
// String is terminated by a null character '\0'
int main()
{
	char word[11]; // In this string word we can write atmost 10 different characters as last space is reserved for null character '\0'
	// In above expression I have initiliased the array of characters named word.
	// String is simply but an array of characters.
	// Data type of string is char
	// Every character consumes 1 byte. THEREFORE size of array = 1*11 = 11 bytes
	printf("Please enter a string.\n");
	scanf("%s", word);
	printf("The word is %s and <%c>", word, word[11]);

return 0;	
}
