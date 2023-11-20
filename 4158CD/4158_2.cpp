#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int n, m, cnt = 0;
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;
        vector<int> A(n);

        for (int i = 0; i < n; i++)
            cin >> A[i];

        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;

            // 이진탐색

            int start = 0;
            int end = n - 1;
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (A[mid] == tmp)
                {
                    cnt++;
                    break;
                }
                else if (tmp < A[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        cout << cnt << "\n";
    }
}