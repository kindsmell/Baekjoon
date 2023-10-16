#include <stdio.h>

int main()
{
    int A[100];
    for(int i = 0; i < 100; i++)
        A[i] = i + 1;

    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    for(int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int tmp;
        tmp = A[a - 1];
        A[a -1] = A[b -1];
        A[b -1] = tmp;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}