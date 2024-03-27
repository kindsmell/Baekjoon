#include <iostream>
using namespace std;

long long n, k;
long long D[1001][1001];

int main()
{
    cin >> n >> k;
    for (long long i = 0; i <= n; i++)
    {
        D[i][1] = i;
        D[i][0] = 1;
        D[i][i] = 1;
    }

    for (long long i = 2; i <= n; i++)
    {
        for (long long j = 1; j < i; j++)
        {
            D[i][j] = D[i - 1][j] + D[i - 1][j - 1];
        }
    }

    cout << D[n][k] % 10007;

    // 오버플로우 발생 -> 틀렸습니다!
}