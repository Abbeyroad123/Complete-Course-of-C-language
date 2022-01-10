#include <stdio.h>

int main(void) {

    int age;

    // add a line here that declares an integer pointer named "ageptr"
    int * ageptr;
    scanf("%d", &age);
	ageptr = &age;
    // add a line here that stores the address of age in ageptr  

    printf("The secret address is... ");
	printf("%d", ageptr);
    // add a line here that prints out the address stored in ageptr  

    printf("Now take three drops of the magic elixir. \n");
	* ageptr = * ageptr - 5;
    // add a line that uses only ageptr to lower the age by 5 years

    printf("Did the elixir work? You are %d years old!", age);
    
    
return 0;
}
