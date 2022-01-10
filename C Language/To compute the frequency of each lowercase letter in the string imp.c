#include<stdio.h>
int main()
{
	int i;
    int a[26]={0};//Important to initialize array to 0 otherwise wrong answer
    char str[200];
    printf("Enter the input string\n");
    scanf("%s",str);
    
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        	a[str[i]-97]++;	
		}
    }
    
    printf("The letter frequency is\n");
    for(i=0; i<26; i++)
    {
        if(a[i]!=0)
        {
        	printf("%c %d\n",i+97,a[i]);	
		}
    }

return 0;
}
