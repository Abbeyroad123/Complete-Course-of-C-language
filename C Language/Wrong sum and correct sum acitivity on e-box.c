#include <stdio.h>
#include <stdlib.h>

int wrongsum(int, int*);
int correctsum(int, int*);

int main()
{
    int no=0, i=0;
    int *num=0;
    scanf("%d", &no);
    num = (int*)malloc(no*sizeof(int));
    int *ptr = num;
    for(i=0; i<no; i++)
    {
        scanf("%d", &(*(ptr++)));
    }
    printf("%d\n%d\n", wrongsum(no, num), correctsum(no, num));
    
return 0;
}

int wrongsum(int no, int *a)
{
    int i=0, sum=0;
    int temp=0;
    for(i=0; i<no; i++)
    {
        temp = *(a++);
        if(temp<0)
        {
            sum = sum + ((-1)*temp);
        }
        else
        {
            sum = sum + temp;
        }
    }
    return sum;
}

int correctsum(int no, int *a)
{
    int sum=0, i=0;
    for(i=0; i<no; i++)
    {
        sum = sum + *(a++);
    }
    return sum;
}
