#include <stdio.h>
int main()
{
    int a = 42;
    double d = 58.394;
    char c = 'r';
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);

return 0;
}
