#include <stdio.h>
/* To use the functions defined in Functions.c I need to #include Functions.h */
#include "Functions.h"

int main(void)
{
    int a, b;
    printf("Insert two numbers: ");
    if(scanf("%d %d", &a, &b)!=2)
    {
        fputs("Invalid input", stderr);
        return 1;
    }
    printf("%d + %d = %d", a, b, Sum(a, b));
    return 0;
}
