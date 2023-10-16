#include <stdio.h>

int main()
{
    int n[10];
    int max = 0, idx;

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &n[i]);
        if(n[i] > max)
        {
            max = n[i];
            idx = i;
        }
    }

    printf("%d\n%d", max, idx + 1);
    
}