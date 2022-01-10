#include <stdio.h>
int main()
{
    //! showMemory(start=65520)
    int a = 10;
    int b = 11;
    {						// Start of BLOCK
        int c = 12;
        int d = 13;
        int e = a + c;
        c = b + d;
        printf("c: %d\n", c);
        printf("e: %d\n", e);
    }						// End of BLOCK
    int f = 14;
    int g = 15;
    printf("f: %d\n",f);
    printf("g: %d", g);

return 0;    
}
