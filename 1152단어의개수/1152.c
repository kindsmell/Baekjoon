#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    gets(str);
    int cnt = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(('a' <= str[i] && str[i] <= 'z')||('A' <= str[i] && str[i] <= 'Z'))
        {
            if(str[i+ 1] == ' ' || str[i + 1] == '\0')
                cnt++;
        }
    }

    printf("%d", cnt);

}
//이게 c++ getline 으로 한 것보다 빠르군..
//알파벳이 나올때마다 체크하기 때문에 좋은 알고리즘은 아님.