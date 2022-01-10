#include <stdio.h>

struct person
{
	char name[20];
	int rollno;
	int marks;	
};

void readname(struct person *, int);
void printname(struct person, int);

int main()
{
	int i;
	struct person group[3];
	printf("Now I am going to input and output 3 names, roll numbers and marks using structures\n");
	printf("Start entering names, roll numbers and marks.\n");
	for(i=0; i<3; i++)
	{
		printf("Person %d\n", i+1);
		readname(&group[i], i);
	}
	printf("Details of people \n");
	for(i=0; i<3; i++)
	{
		printname(group[i], i);
	}
	
return 0;	
}

void readname(struct person * p1, int i)
{
	printf("Enter the name of person %d\n", i+1);
	scanf("%s", p1->name);
	printf("Enter the roll no of person %d\n", i+1);
	scanf("%d", &p1->rollno);	
	printf("Enter the marks of person %d\n", i+1);
	scanf("%d", &p1->marks);		
}

void printname(struct person p1, int i)
{
	printf("Person %d", i+1);
	printf("Name : %s\n", p1.name);
	printf("Roll number : %d\n", p1.rollno);
	printf("Marks : %d\n\n", p1.marks);
}
