#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *num1, int *num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

int main()
{
    char str[10];
    scanf("%s", str);

    int *num;

    num = (int *)malloc(sizeof(int) * strlen(str));

    for (int i = 0; i < strlen(str); i++)
        num[i] = str[i] - '0';

    for (int i = 0; i < strlen(str); i++)
    {
        int max = i;
        for (int j = i + 1; j < strlen(str); j++)
        {
            if (num[j] > num[max])
                max = j;
        }
        swap(&num[i], &num[max]);
    }

    for (int i = 0; i < strlen(str); i++)
        printf("%d", num[i]);
}