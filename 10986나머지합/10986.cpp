#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;
    
    long long tmp, result = 0, sum = 0; //long long으로 선언해야했었다.
    vector<long long> remain(m, 0);

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum = sum + tmp;
        if(sum % m == 0)
            result++;
        remain[sum % m]++;
    }
    for(int i = 0; i < m; i++)
        result = result + ((remain[i] * (remain[i] - 1))/ 2);
    cout << result << "\n";
    return 0;
}