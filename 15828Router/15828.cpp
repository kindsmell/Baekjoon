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

    int tmp;
    int tmp2;
    while(1)
    {
        cin >> tmp;
        if(tmp == 0)
        {
            A.pop();
            continue;
        }
        else if (tmp == -1)
            break;
        if(A.size() < n)
            A.push(tmp);          
    }

    if(A.empty())
    {
        cout << "empty";
        return 0;
    }
    while(!A.empty())
    {    
        cout << A.front() << " ";
        A.pop();
    }

}