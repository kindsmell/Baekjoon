#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> time(n); // 크기를 지정해줘야 push_back을 안 쓰고 인덱스에 접근하여 값을 할당할 수 있다.

    for (int i = 0; i < n; i++)
    {
        cin >> time[i].second;
        cin >> time[i].first;
    }

    sort(time.begin(), time.end());

    int lastEndtime = time[0].first;
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (lastEndtime <= time[i].second)
        {
            cnt++;
            lastEndtime = time[i].first;
        }
    }

    cout << cnt;
}