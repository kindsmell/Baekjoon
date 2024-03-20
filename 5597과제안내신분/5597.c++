#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> idx(28);
    for (int i = 0; i < 28; i++)
    {
        int x;
        cin >> x;
        idx[x - 1] = 1;
    }

    for (int i = 0; i < 28; i++)
    {
        if (idx[i] == 0)
            cout << i + 1 << "\n";
    }
}