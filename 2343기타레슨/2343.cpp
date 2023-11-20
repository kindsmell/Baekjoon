#include <iostream>
#include <vector>
using namespace std;

// 중앙값 크기로 모든 레슨을 저장할 수 있으면 종료 인덱스 = 중앙값 - 1
//..없으면 시작인덱스 = 중앙값 + 1

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> A(n);

    int start = 0, end = 0; // start는 최댓값, end는 모든 합 저장
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] > start)
            start = A[i];
        end = end + A[i];
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int sum = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (sum + A[i] > mid) // 중앙값보다 크면 다음 블루레이에 담기
            {
                cnt++;
                sum = 0;
            }
            sum = sum + A[i]; // sum에 더하기 전에 더했을 때 mid보다 크게 되는지를 check
        }
        if (sum != 0)
            cnt++;
        if (cnt > m)
            start = mid + 1;
        else
            end = mid - 1;
    }

    cout << start;
}