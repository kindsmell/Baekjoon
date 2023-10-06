#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<int> NGE_arr(n);
    vector<int> num_arr(n);
    stack<int> idx_stk;

    for (int i = 0; i < n; i++)
        cin >> num_arr[i];

    idx_stk.push(0);
    for (int i = 1; i < n; i++)
    {
        while (num_arr[i] > num_arr[idx_stk.top()])
        {
            NGE_arr[idx_stk.top()] = num_arr[i];
            idx_stk.pop();
            if (idx_stk.empty())
                break;
        }
            idx_stk.push(i);
    }
    while (!idx_stk.empty())
    {
        NGE_arr[idx_stk.top()] = -1;
        idx_stk.pop();
    }

    for (int val : NGE_arr)
        cout << val << " ";

}