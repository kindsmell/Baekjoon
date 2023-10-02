#include <stdio.h>

int main()
{
    int n, m, start, end;
    int arr[100001];
    int sum[100001];

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) //line 20에서 인덱스가 음수가 되는 것을 방지하기위해 1부터 저장
    {   
        scanf("%d", &arr[i]);
        sum[i] = sum[i - 1] + arr[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &start, &end);
        printf("%d\n", sum[end] - sum[start - 1]); //개행을 잘 넣어주자!
    }

    return 0;
}