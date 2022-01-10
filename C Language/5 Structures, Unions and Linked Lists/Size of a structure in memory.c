#include <stdio.h>

struct student
{
	char firstName[5];
	char lastName[5];
	int birthYear;
	double aveGrade;
};

int main(void) 
{
    //! showMemory(start=65520)
	struct student me;
    printf("Size of struct student is %zu.\n", sizeof(struct student));	//Or sizeof(me)
    printf("Size of firstName is %zu.\n", sizeof(me.firstName));
    printf("Size of lastName is %zu.\n", sizeof(me.lastName));
    printf("Size of birthYear is %zu.\n", sizeof(me.birthYear));
    printf("Size of aveGrade is %zu.\n", sizeof(me.aveGrade));
	// Ideally size of struct student should be 22 but we get 24 because of padding taking place by the compiler.
	return 0;
}

