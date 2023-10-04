#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n, 0);

    int i, j, k;

    for(int q = 0; q < m; q++)
    {
        cin >> i >> j >> k;

        for(int p = i; p <= j; p++)
            arr[p -1] = k;
    }

    for(int value : arr)
        cout << value << " ";
}

