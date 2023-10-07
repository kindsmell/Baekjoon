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

    int sum = 0;
    int cnt = 0;
    for(int i = n - 1; sum <= k; i--)
    {
        if(sum == k)
            break;
        while(sum + A[i] <= k)
        {
            sum = sum + A[i];
            cnt++;
        }
    }
    cout << cnt;
}