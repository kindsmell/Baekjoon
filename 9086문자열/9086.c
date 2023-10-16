#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char word[10][1001];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
        printf("%c", word[i][0]);
        printf("%c\n", word[i][strlen(word[i]) - 1]);
    }
}