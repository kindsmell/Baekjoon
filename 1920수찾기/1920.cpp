#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> A;
int search(int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (A[mid] == target)
            return 1;
        else if (target < A[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    A.resize(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    sort(A.begin(), A.end());

    int m;
    cin >> m;
    int target;
    for (int i = 0; i < m; i++)
    {
        cin >> target;
        cout << search(target) << "\n";
    }
}