#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, p;
    cin >> n >> p;
    stack<int> A[7];

    int a, b, cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        while(!A[a].empty() && A[a].top() > b)
        {
            A[a].pop();
            cnt++;
        }   
        if(A[a].empty())
        {
            A[a].push(b);
            cnt++;
        }
        else if (A[a].top() < b)
        {
            A[a].push(b);
            cnt++;
        }
    }

    cout << cnt;
}
