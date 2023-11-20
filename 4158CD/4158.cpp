#include <iostream>
#include <vector>
using namespace std;

// 두 사람이 동시에 가지고 있는 CD의 개수를 출력한다.
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, cnt = 0;
    cin >> n >> m;

    vector<int> CD(1000000001, 0);

    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        CD[tmp]++;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        CD[tmp]++;
        if (CD[tmp] == 2)
        {
            cnt++;
        }
    }

    cin >> n >> m;

    cout << cnt;
}
