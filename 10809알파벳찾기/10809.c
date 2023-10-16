#include <stdio.h>
#include <string.h>

int main()
{
    int alp[26];
    char word[101];

    for(int i = 0; i < 26; i++)
        alp[i] = -1;

    scanf("%s", &word);

    for(int i = 0; i < strlen(word); i++)
    {
        if(alp[word[i] - 'a'] != -1)
            continue;
        alp[word[i] - 'a'] = i;
    }    

    for(int i = 0; i < 26; i++)
        printf("%d ", alp[i]);
}