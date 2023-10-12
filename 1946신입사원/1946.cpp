#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//선택정렬
//1차 서류심사, 2차 면접시험 
//'둘 다' 다른 지원자보다 낮으면 그 사람은 떨어짐.

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n; //t는 테스트케이스 개수, n은 지원자 수
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;
        vector<pair<int, int>> A(n);
        
        for(int i = 0; i < n; i++)
            cin >> A[i].first >> A[i].second;
        
        int result = n;
        for(int i = 0; i < n; i++)
        {
            int my_first = A[i].first, my_second = A[i].second;
            int swap_idx = i;
            for(int j = 1; j < n; j++)
            {
                if(my_first > A[j].first && my_second > A[j].second)
                {
                    result--;
                    break;
                }
            }
            swap(A[0], A[i]);
        }1
        
        cout << result << "\n";
    }

}

