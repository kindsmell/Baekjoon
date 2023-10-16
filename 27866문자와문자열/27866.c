#include <stdio.h>

int main()
{
    int i;
    char word[1001];

    scanf("%s", word);
    scanf("%d", &i);

    printf("%c", word[i -1]);

    return 0;
}