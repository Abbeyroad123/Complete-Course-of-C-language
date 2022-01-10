#include <stdio.h>

int main()
{
	// A C program to find whether the given number is odd or even, using Bitwise ' & ' Operator.	
	printf("Enter the number :\n");
	scanf("%d", &no);
	if(no & 1)	// 0 is used to rpresent false in c language
	{
		printf("Odd\n");	
	}
	else
	{
		printf("Even\n");	
	}
	
return 0;	
}
/*
#include <stdio.h>

int main()
{
    int no;
	// A C program to find whether the given number is odd or even, using Bitwise ' & ' Operator.	
	printf("Enter the number :\n");
	scanf("%d", &no);
	(no & 1)	// 0 is used to represent false in c language
		? printf("Odd\n")	
	    : printf("Even\n");	
	
return 0;	
}
*/
