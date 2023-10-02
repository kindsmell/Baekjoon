#include <iostream>
using namespace std;

int main()
{
    int tmp, i = 1;
    int sum[11] = {0,};
    int num[11] = {0,};

    for(int i = 1; i <= 10; i++)
    {
        cin >> num[i];
        sum[i] = sum[i - 1] + num[i];
    }
    while (i <= 10)
    {
        if (sum[i] >= 100)
        {

            if (sum[i] - 100 <= 100 - sum[i -1] || sum[i] == 100)
            {
                cout << sum[i];
                break;
            }
            else if (sum[i] - 100 > 100 - sum[i -1])
            {
                cout << sum[i -1];
                break;
            }
            
        }
        i++;
    }
    if (sum[10] < 100)
        cout << sum[10];

    return 0;
}