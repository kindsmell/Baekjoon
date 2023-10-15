#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, cnt = 0;
    cin >> n >> m;

    vector<string> A;
    vector<string> B;
    string name;

    for(int i = 0; i < n + m; i++)
    {
        cin >> name;
        A.push_back(name);
    }

    sort(A.begin(), A.end());//같은 이름은 정렬 시 , 붙어있게 된다.
    for(int i = 0; i < n + m -1; i++)
    {
        if(A[i] == A[i + 1])
        {
            B.push_back(A[i]);
            cnt++;
        }
    }
    
    cout << cnt << "\n";
    for(string rnt : B)
        cout << rnt << "\n";   
}