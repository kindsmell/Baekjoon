#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    
    cin >> n;

    queue<int> A;
    for(int i = 1; i <= n; i++)
        A.push(i);
    
    while(A.size() > 1)
    {
        A.pop();
        A.push(A.front());
        A.pop();
    }
    cout << A.front();
}