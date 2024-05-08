#include <iostream>
using namespace std;

// 이차원 배열 사용
// D[N][0] : N번째, 0으로 끝나는 개수
// D[N][1] : N번째, 1로 끝나는 개수

// D[N][0] = D[N-1][0] + D[N-1][1]
// D[N][1] = D[N-1][0]

int main()
{

    long long D[91][2];

    D[1][0] = 0;
    D[1][1] = 1;

    for (int i = 2; i <= 90; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            D[i][0] = D[i - 1][0] + D[i - 1][1];
            D[i][1] = D[i - 1][0];
        }
    }

    int n;
    cin >> n;

    cout << D[n][0] + D[n][1];
}