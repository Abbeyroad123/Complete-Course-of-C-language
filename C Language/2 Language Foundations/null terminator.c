#include <stdio.h>
int main(void) 
{
    char word1[5];
    char word2[8];
    scanf("%s %s", word1, word2);
    word1[3] = '\0';
    word2[2] = '\0';
    printf("%s %s\n", word1, word2);

return 0;
}
