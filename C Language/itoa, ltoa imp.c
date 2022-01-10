#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch[10], ch1[10];
	int b;
	long l = 12345;
	printf("Enter a number:\n");
	scanf("%d", &b);
	itoa(b,ch,2);	// int to string : 2-- binary
	printf("int to binary string=%s\n", ch);	
	itoa(b, ch, 8);	// int to string : 8-- octal
	printf("int to octal string=%s\n", ch);	
	itoa(b, ch, 10);	// int to string : 10-- decimal
	printf("int to decimal string=%s\n", ch);	
	itoa(b, ch, 16); // int to string : 16-- hexadecimal
	printf("int to hexadecimal string=%s\n\n", ch);	
	
	// Convert long to string
	ltoa(l, ch1, 2);	// long to string : 2-- binary	
	printf("long to binary string=%s\n", ch1);
	ltoa(l, ch1, 8);	// long to string : 8-- octal	
	printf("long to octal string=%s\n", ch1);	
	ltoa(l, ch1, 10);	// long to string : 10-- decimal	
	printf("long to decimal string=%s\n", ch1);	
	ltoa(l, ch1, 16);	// long to string : 16-- hexadecimal
	printf("long to hexadecimal string=%s\n", ch1);	
	
return 0;	
}
