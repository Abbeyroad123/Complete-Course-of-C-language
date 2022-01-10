#include <stdio.h>
void reverseArray(int *);
int main()
{
	int i, j;
	int list[6];
	for(i=0; i<6; i++)
	{
		scanf("%d", &list[i]);
	}
	reverseArray(list);
	for(j=0; j<6; j++)
	{
	printf("%d", list[j]);
	}

return 0;
}
void reverseArray(int * ptr)
{
	int swap1, swap2, swap3;
	swap1 = *ptr;
	*ptr = *(ptr+5);
	*(ptr+5) = swap1;
	
	swap2 = *(ptr+1);
	*(ptr+1) = *(ptr+4);
	*(ptr+4) = swap2;
	
	swap3 = *(ptr+2);
	*(ptr+2) = *(ptr+3);
	*(ptr+3) = swap3;		
}

/* SOLUTION BY MAM
#include <stdio.h>

void reverseArray(int *arr);

int main (void){
	int arr[6];
	int i;

	for (i = 0; i < 6; i++){
		scanf("%d", &arr[i]);
	}

	reverseArray(arr);

	for (i = 0; i < 6; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}

void reverseArray(int *arr){
	int swap;

	swap = arr[5];
	arr[5] = arr[0];
	arr[0] = swap;
	
	swap = arr[4];
	arr[4] = arr[1];
	arr[1] = swap;
	
	swap = arr[3];
	arr[3] = arr[2];
	arr[2] = swap;
}
*/
