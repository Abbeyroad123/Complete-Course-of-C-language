#include <stdio.h>
int sum(int, int); //function PROTOTYPE
int main(void) 
{
    int a, b;
    int result;
    printf("Please enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("You entered %d and %d.\n", a, b);
    result = sum(a, b); //copies of the VALUES of the ARGUMENTS a and b
    printf("Result of the sum = %d.\n", result);
    return 0;
}
// Function DEFINITION
int sum(int x, int y) //values are copied into PARAMETERS x and y
{   int compute;
    printf("Starting the computation!\n");
    compute = x + y;
    printf("Finished the computation successfully!\n");
    return compute;
}
