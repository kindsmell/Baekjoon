// 기수정렬 : 가장 빠른 정렬방법
// 21 20 13 14 23 12 10 11 24 22
// 20 10 21 11 12 22 13 23 14 24
// 10 11 12 13 14
// 20 21 22 23 24
// 일의 자리에서 정렬된 순서 기준으로 십의 자리에 저장!! 그러니까 정렬되는 것임.
// 십의자리가 같을 때, 일의 자리가 작은 애가 먼저 바구니에 들어오게됨.

// 이 문제는 계수정렬(counting sort): data == idex로 접근, 들어오는 수의 범위가 작을 때에 사용
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[10001] = {0}; // 1부터 사용.

    int n;
    cin >> n;

    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        num[tmp]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        if (num[i] != 0)
        {
            for (int j = 0; j < num[i]; j++)
            {
                cout << i << "\n";
            }
        }
    }
}