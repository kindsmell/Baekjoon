#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    vector<int> arr(n + 1);

    for (int i = 2; i <= n; i++)
        arr[i] = i;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == 0) // 합성수이면 0심기
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << "\n";
    }
}