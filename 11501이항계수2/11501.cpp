#include <iostream>
using namespace std;

long long fact(long long num)
{
    if (num <= 1)
        return 1;

    return num * fact(num - 1);
}

long long comb(long long n, long long k)
{
    long long a = fact(n);
    long long b = fact(n - k);
    long long c = fact(k);

    return (a / (b * c));
}
int main()
{
    long long n, k;
    cin >> n >> k;

    cout << comb(n, k) % 10007;
}