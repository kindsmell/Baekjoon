#include <stdio.h>

int main()
{
    char str[1000001];
    int i;
    int bcnt = 0;
    int ncnt;
    char alp = 'A';
    char balp = '\?';
    int flag = 0;

    scanf("%s", str);
    while (alp <= 'Z')
    {
        ncnt = 0;
        i = 0;
        while (str[i] != 0)
        {
            if (str[i] == alp || str[i] == alp + 32)
            {
                ncnt++;
            }
            i++;
        }
        if (ncnt == bcnt)
        {
            flag = 1;
        }
        if (ncnt > bcnt)
        {
            bcnt = ncnt;
            balp = alp;
            flag = 0;
        }
        alp++;
    }
    if (flag == 1)
    {
        balp = '\?';
    }
    printf("%c", balp);

    return 0;
}