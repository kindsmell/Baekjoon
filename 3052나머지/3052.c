#include <stdio.h>

int main()
{
    int remain[10];
    int n, cnt = 1;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        remain[i] = n % 42;
    }

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9 - i; j++)
        {
            if(remain[j] > remain[j + 1])
            {
                int tmp = remain[j];
                remain[j] = remain[j + 1];
                remain[j + 1] = tmp;
            }           
        }
    }//버블정렬

    for(int i = 1; i < 10; i++)
    {
        if(remain[i] != remain[i - 1])
            cnt++;
    }

    printf("%d", cnt);
}