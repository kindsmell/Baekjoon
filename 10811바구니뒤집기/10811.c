#include <stdio.h>

int main()
{
    int n[100];
    for(int i = 0; i < 100; i++)
        n[i] = i + 1;

    int N, M;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < M; i++)
    {
        int a , b;
        scanf("%d %d", &a, &b);
        int a1 = a - 1, b1 = b - 1;
        for(int i = 0; i <= (b - a) / 2; i++)
        {
            int tmp = n[a1];
            n[a1] = n[b1];
            n[b1] = tmp;
            a1++;
            b1--;
        }
    }

    for(int i = 0; i < N; i++)
        printf("%d ", n[i]);
}