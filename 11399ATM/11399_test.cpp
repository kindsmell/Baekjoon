#include <iostream>
#include <vector>
using namespace std;

// 삽입정렬 j++로 해보기
int main()
{
    int n;
    cin >> n;
    vector<int> A(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 1; i < n; i++)
    {
        int here = i;
        int insetrVal = A[i];
        int j;
        for (j = 0; j < i; j++)
        {
            if (A[i] < A[j])
            {
                here = j;
                break;
            }
        }
        if (j != i)
        {
            for (int k = i; k > here; k--)
            {
                A[k] = A[k - 1];
            }
            A[here] = insetrVal;
        }
    }

    for (int val : A)
    {
        cout << val << " ";
    }
}