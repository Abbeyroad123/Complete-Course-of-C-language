#include <stdlib.h>  // Instead of stdio.h we use stdlib.h for malloc(memory allocation).
// But as we have used only stldlib.h and now if we try to use scanf or printf it will show implicit declaration of function error.

int main(void)
{
	// By using malloc(memory allocation) we reserve space in memory(heap) while all the other variables go to stack.
    //! showMemory(start=272)
    int * intptr;
    double * doubleptr;
    intptr = (int *) malloc(sizeof(int));  // (int *) is casting to the correct data type i.e. int as it helps malloc to do its job more easily.
    * intptr = 5;
    doubleptr = (double *) malloc(sizeof(double));   // (double *) is casting to the correct data type i.e, double
    * doubleptr = 9.0;
    return 0;
}
