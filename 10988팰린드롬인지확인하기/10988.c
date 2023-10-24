#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    char str[101];
    char str2[101];

    scanf("%s", str);
    strcpy(str2, str);

    for (int i = 0, j = strlen(str) - 1; i < strlen(str) / 2; i++, j--)
    {
        swap(&str[i], &str[j]);
    }
    if (strcmp(str, str2) == 0)
        printf("1");
    else
        printf("0");
}