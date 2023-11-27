#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;
    cin >> A;

    int A_len = A.length();

    int i = 0;
    int sum = 0;
    int flag = 0;
    // 첫번째 숫자를 sum에 담기
    while (i < A_len && A[i] != '+' && A[i] != '-')
    {
        sum = sum * 10 + (A[i] - '0');
        i++;
    }
    // flag를 설정해서  -가 한번 등장하기만하면 그 뒤의 모든 수들은 다 -가 붙도록 만들면 되는거 아니묘?
    while (i < A_len)
    {
        if (A[i] == '-')
        {
            flag = 1;
            i++;
        }
        else
            i++;
        if (flag == 0)
        {
            int tmp = 0;
            while (i < A_len && A[i] != '+' && A[i] != '-')
            {
                tmp = tmp * 10 + (A[i] - '0');
                i++;
            }
            sum = sum + tmp;
        }
        else
        {
            int tmp = 0;
            while (i < A_len && A[i] != '+' && A[i] != '-')
            {
                tmp = tmp * 10 + (A[i] - '0');
                i++;
            }
            sum = sum - tmp;
        }
    }

    cout << sum;
}
