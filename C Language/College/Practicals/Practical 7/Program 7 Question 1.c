#include <stdio.h>

int main()
{
	int i;
	int rollno[3], marks[3];
	char word[3][20];
	printf("Now I am going to write a program to use arrays to input and output 3 names, roll numbers and marks.\n");
	printf("Start entering names, roll numbers and marks.\n");
	for(i=0; i<3; i++)
	{
		printf("Enter the name of person %d\n", i+1);
		scanf("%s", word[i]);
		printf("Enter the roll no of person %d\n", i+1);
		scanf("%d", &rollno[i]);
		printf("Enter the marks of person %d\n", i+1);
		scanf("%d", &marks[i]);
	}
	printf("Details of people \n");
	for(i=0; i<3; i++)
	{
		printf("Person %d", i+1);
		printf("Name : %s\n", word[i]);
		printf("Roll number : %d\n", rollno[i]);
		printf("Marks : %d\n\n", marks[i]);
	}
	
return 0;	
}
