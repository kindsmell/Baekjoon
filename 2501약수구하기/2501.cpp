#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int rnt = 0, cnt = 1;
    int arr[10001] = {0};

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[cnt] = i;
            cnt++;
        }
    }

    if (cnt < k)
    {
        cout << 0;
    }
    else
    {
        cout << arr[k];
    }
}