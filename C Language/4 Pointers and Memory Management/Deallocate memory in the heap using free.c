#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    //! showMemory(start=438, cursors=[a,b,c])
    int *a, *b, *c;
    a = (int *) malloc(sizeof(int));
    *a = 1;
    printf("I stored %d at memory location %p.\n", *a, a);
    b = (int *) malloc(sizeof(int));
    *b = 2;
    free(a);
	/* We can't depend on some other variable overriding a or not so when we have freed a memory we have released it, 
	now if you try to get its value it may show erratic behaviour. */
    c = (int *) malloc(sizeof(int));
    *c = 3;
    printf("Can I still access a?\n");
    printf("I stored %d at memory location %p.\n", *a, a);
    free(b);
    free(c);
    return 0;
}
