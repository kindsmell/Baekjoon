#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(n,0));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    
    int p, q, r, s;
    for (int i = 0; i < m; i++)
    {
        int sum[2015] = {0,};
        int k = 1;
        cin >> p >> q >> r >> s;

        int tmp = q;
        while(p <= r)
        {
            q = tmp;
            while(q <= s)
            {
                sum[k] = sum[k - 1] + arr[p - 1][q - 1];
                k++;
                q++;
            }
            p++;
        }
        cout << sum[k - 1] << "\n";
    }
}

//outofbounds 런타임에러남.