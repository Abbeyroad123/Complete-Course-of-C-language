#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
	printf("Now I am going to write a program for dynamic memory allocation using malloc() and free().\n");
    int * array;
    array = (int *) malloc(5*sizeof(int)); // We multiply by 5 beause we want an array of 5 elements.
    array[0] = 3;
    array[1] = 44;
    array[2] = 2;
    * (array + 3) = 7;
    * (array + 4) = -1;
    for(i=0; i<5; i++)
    {
    	printf("%d element = %d\n", i+1, *(array + i));
	}
	free(array);	
	
return 0;	
}
