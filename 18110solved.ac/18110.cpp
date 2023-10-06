#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, level = 0;

    cin >> n;

    if (n == 0)
    {
        cout << level;
        return 0;
    }

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int num = round(n * 0.15);

    double sum = 0;
    for(int i = num; i < n - num; i++)
        sum = sum + arr[i];
    
    level = round(sum / (n - num * 2));
    cout << level;

    return 0;
}