#include <stdio.h>
struct point
{
    int x;
    int y;
};

void printPoint(struct point pt);
void readPoint(struct point * ptr);

int main(void) 
{
    //! showMemory(start=65520)
    struct point group[2];	// We have defined an array of structures by the name of triangle which has 3 elements
    struct point temp;
    int i;
    for (i=0; i<2; i++)
	{
        readPoint(&group[i]);
    }
	printf("Now I am going to swap these 2 points\n");
	temp = group[0];
	group[0] = group[1];
	group[1] = temp;
	for (i=0; i<2; i++)
	{
        printPoint(group[i]);
    }
return 0;
}

void readPoint(struct point * ptr) 
{
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x);
	printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}

void printPoint(struct point pt)
{
    printf("(%d, %d)\n", pt.x, pt.y);
}
