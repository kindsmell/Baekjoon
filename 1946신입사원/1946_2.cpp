#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//그리디 알고리즘
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        vector<pair<int, int>> A(n); //n개를 선언해줘야지 A[i]로 접근가능

        for(int i = 0; i < n; i++)
            cin >> A[i].first >> A[i].second;

        sort(A.begin(), A.end()); //first를 기준으로 오름차순 정렬

        int cnt = 1, tmp = 0;

        for(int i = 1; i < n; i++)
        {
            if(A[tmp].second > A[i].second){ //이 부분이 진짜 이해가 안 됨..
                cnt++;
                tmp = i;
            }
        }
        
        cout << cnt << "\n";
    }
}
