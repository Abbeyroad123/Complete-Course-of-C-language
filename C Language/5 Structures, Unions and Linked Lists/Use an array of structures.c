#include <stdio.h>
struct point
{
    int x;
    int y;
};

void printPoint(struct point pt);
void readPoint(struct point * ptr);
void printTriangle(struct point *ptr);

int main(void) 
{
    //! showMemory(start=65520)
    struct point triangle[3];	// We have defined an array of structures by the name of triangle which has 3 elements
    int i;
    for (i=0; i<3; i++)
	{
        readPoint(&triangle[i]);
    }
    printTriangle(triangle);	// We send address of the first element of trianlge i.e. triangle[0]
	return 0;
}

void readPoint(struct point * ptr) 
{
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x);	/*
	First we need to dereference the pointer named ptr and get location of triangle[0] and then find element x of that triangle[0] structure */
	printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}

void printTriangle(struct point *ptr) 
{
    int i;
    for (i=0; i<3; i++) 
	{
        printPoint(ptr[i]);	//printPoint(*(ptr+i));
    }
}

void printPoint(struct point pt)
{
    printf("(%d, %d)\n", pt.x, pt.y);
}
