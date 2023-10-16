#include <stdio.h>

int main()
{
    int num[30] = {0};
    int n;

    for(int i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        num[n - 1] = 1;
    }

    int absent[2];
    for(int i = 0, j =0; i < 30; i++)
    {
        
        if(num[i] == 0)
        {
            absent[j] = i + 1;
            j++;
        }
    }

    if(absent[0] > absent[1])
    {
        int tmp = absent[0];
        absent[0] = absent[1];
        absent[1] = tmp;
    }

    for(int i = 0; i < 2; i++)
    {
        printf("%d\n", absent[i]);
    }
}