#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int sum[100001];

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        sum[i] = sum[i - 1] + tmp;
    }

    for(int i = 0; i < m; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << sum[end] - sum[start - 1] << "\n"; //endl보다 '\n'이 빠르다
    }
}
