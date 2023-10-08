#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    vector<int> A(n);

    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    int cnt = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(A[i] <= k)
        {    cnt = cnt + k / A[i];
            k = k % A[i];
        }
        if (k == 0)
            break;
    }

    cout << cnt;
}