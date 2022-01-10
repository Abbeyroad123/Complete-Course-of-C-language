#include <stdio.h>
int main() 
{
    char c;
    int i;
    double d;
    char listChar[3];
    int listInt[3];
    double listDouble[3];
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(double));
	
	printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(i));
    printf("%zu\n", sizeof(d));    
    
    printf("%zu\n", sizeof(listChar));
    printf("%zu\n", sizeof(listInt));
    printf("%zu\n", sizeof(listDouble));
    
return(0);   
}
