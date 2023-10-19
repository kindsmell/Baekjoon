#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    
    nth_element(A.begin(), A.begin() + k - 1, A.end());
    cout << A[k -1];

}