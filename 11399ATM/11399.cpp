#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i < n; i++)
    {
        int here = i;
        int insert_value = A[i];

        for (int j = i - 1; j >= 0; j--) // idx이전부터 삽입할 위치 찾기
        {
            if (A[i] > A[j]) // j++로 가는게 아니라 j--로 가기 때문에 가장 오른쪽에있는 A[i]보다 작은 원소를 찾을 수 있음.
            {
                here = j + 1;
                break;
            }
            if (j == 0) // j 가 0까지 갔다는 것은 자기가 제일 작은 것이기 때문에.
            {
                here = 0;
            }
        }
        for (int j = i; j > here; j--)
        {
            A[j] = A[j - 1];
        }
        A[here] = insert_value;
    }

    vector<int> sum(n, 0);

    sum[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + A[i];
    }

    // 합배열 총합

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result = result + sum[i];
    }

    cout << result;
}