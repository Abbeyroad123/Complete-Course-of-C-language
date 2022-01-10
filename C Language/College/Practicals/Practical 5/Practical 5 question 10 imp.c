#include <stdio.h>

int main()
{
	int i, no, j, k, l, m;
	double array[51];
	printf("Now I am going to write a program to delete duplicates in an array.\n");
	
	printf("Please enter how many elements do you want in the array.\n");
	scanf("%d", &no);
	
	printf("Now start entering the elements of the array.\n");
	for(l=0; l<no; l++)
	{
		scanf("%lf", &array[l]);
	}
	
 for ( i = 0; i < no; i ++)  
    {  
        for ( j = i + 1; j < no; j++)  
        {  
            // use if statement to check duplicate element  
            if ( array[i] == array[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j+1; k < no; k++)  
                {  
                    array[k-1] = array[k];  
                }  
                // decrease the size of array after removing duplicate element  
                no--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
      
	
	printf("After deletion of the duplicate elements.\n");
	for(m=0; m<no; m++)
	{
		printf("%.2lf ", array[m]);
	}
		
return 0;	
}
