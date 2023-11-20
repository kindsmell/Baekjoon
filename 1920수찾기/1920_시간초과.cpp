#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    int m;
    cin >> m;
    int tmp;
    vector<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        it = find(A.begin(), A.end(), tmp);

        if (it == A.end())
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }
}