#include <stdio.h>

int main()
{
    int num[100];
    int n, v, cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf("%d", &v);

    for (int i = 0; i < n; i++)
    {
        if (num[i] == v)
            cnt++;
    }

    printf("%d", cnt);
    return 0;
}