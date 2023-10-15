#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //sort함수, binary_search함수 
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<string> A;
    vector<string> B;
    string name;

    for(int i = 0; i < n; i++)
    {
        cin >> name;
        A.push_back(name);
    }

    sort(A.begin(), A.end()); //이분탐색을 위해서는 탐색 대상이 정렬되어 있어야한다.

    for(int i = 0; i < m; i++)
    {
        cin >> name;
        if(binary_search(A.begin(), A.end(), name) != 0) //이분탐색, 탐색에 성공하면 true, 실패하면 false를 반환한다.
            B.push_back(name);
    }
    /*
    for(int i = 0; i < m; i++)
    {
        cin >> name;
        for(int j = 0; j < n; j++)
        {
            if(A[j].compare(name) == 0)
            {
                cnt++;
                B.push_back(name);
                break;
            }
        }
    }
    이렇게 했더니 시간초과 남..
    */

    sort(B.begin(), B.end());
    
    cout << B.size() << "\n";
    for(string rnt : B)
        cout << rnt << "\n";   
}