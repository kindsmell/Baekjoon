#include <stdio.h>
#include <string.h>

int main()
{
    int alphabet[26];
    int n, cnt = 0;
    char str[101];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);

        for(int i = 0; i < 26; i++)
            alphabet[i] = 0;

        for(int j = 0; j < strlen(str); j++)
        {
            if (alphabet[str[j] - 'a'] == 0)
                alphabet[str[j] - 'a'] = 1;
            else
                if(str[j] != str[j -1])
                    break;
            
            if(j == strlen(str) - 1)
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}