#include <stdlib.h>
int main(void) 
{
    //! showMemory(start=272)
    int * array;
    array = (int *) malloc(5*sizeof(int)); // We multiply by 5 beause we want an array of 5 elements.
    array[0] = 3;
    array[1] = 44;
    array[2] = 2;
    * (array + 3) = 7;
    * (array + 4) = -1;
    free(array);
    return 0;
}

