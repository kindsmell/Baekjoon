#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, sum = 1;
    int cnt = 1, i = 1, j = 1;

    cin >> n;

    while(j != n)
    {
        if(sum == n)
        {
            cnt++;
            j++;
            sum = sum + j;
        }
        else if(sum > n)
        {
            sum = sum - i;    
            i++;
        }
        else if(sum < n)
        {
            j++;
            sum = sum + j;
        }
    }
    cout << cnt;
}