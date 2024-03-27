#include <iostream>
using namespace std;

int apt[15][15];
// 0층~14층
// 1호~14호
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int j = 1; j <= 14; j++)
        apt[0][j] = j;

    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
        }
    }

    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int k, n;
        cin >> k >> n;

        cout << apt[k][n] << "\n";
    }
}
