#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// x좌표 같은 것 두 세트 있어야하고
// y좌표 같은 것 두 세트 있어야함
// sort 하자
int main()
{
    vector<int> X(3);
    vector<int> Y(3);

    for (int i = 0; i < 3; i++)
        cin >> X[i] >> Y[i];

    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    /*for (int val : X)
        cout << val << " ";

    for (int val : Y)
        cout << val << " ";*/

    // 112
    // 233
    for (int i = 0; i < 2; i++)
    {
        if (X[i] != X[i + 1])
        {
            if (i == 0)
                cout << X[i] << " ";
            else
                cout << X[i + 1] << " ";
        }
    }

    for (int i = 0; i < 2; i++)
    {
        if (Y[i] != Y[i + 1])
        {
            if (i == 0)
                cout << Y[i];
            else
                cout << Y[i + 1];
        }
    }
}