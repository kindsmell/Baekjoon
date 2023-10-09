#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, p;

    cin >> n >> p;

    vector<priority_queue<int, vector<int>>> B(6);
    int a, b, cnt = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        while(!B[a - 1].empty() && B[a - 1].top() > b)
        {
            B[a -1].pop();
            cnt++;
        }   
        if(B[a - 1].empty())
        {
            B[a - 1].push(b);
            cnt++;
        }
        else if(B[a - 1].top() == b)
            continue;
        else if (B[a - 1].top() < b)
        {
            B[a - 1].push(b);
            cnt++;
        }
    }

    cout << cnt;

}