#include <stdio.h>

int main()
{
	int i;
	int j;
	int no;
	int l=0;
	int m;
	char word[11];
	scanf("%d", &no);
	int length[10];  //length[5] number of 5-letter-long words in the text
	for(i=0; i<10; i++)
	{
		length[i] = 0;
	}
	for(j=0; j<no; j++)
	{
		scanf("%s", word);
		l=0;
		while(word[l] != '\0')
		{
			l++;
		}
		length[l] = length[l] + 1;
		printf("%s %d\n", word, l);
	}
	for(m=0; m<10; m++)
	{
		printf("There are %d words with %d letters\n", length[m], m);
	}
	
return 0;	
}

/*
#include <stdio.h>
int main(void) {
    //! showArray(word, cursors=[t])
    //! showArray(length, cursors=[i])
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[11];
    int length[10];//length[5] number of 5-letter-long words in the text
    for(i=0;i<10;i++){
        length[i]=0;
    }
    scanf("%d", &nbWords);
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
            l++;
        }
        length[l] = length[l] + 1;
        printf("%s %d ", word,l);
    }
    for(j=0;j<10;j++){
        printf("There are %d words with %d letters.\n", length[j], j);
    }
    return 0;   
}
*/
