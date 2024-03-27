#include <iostream>
using namespace std;

long long fact(long long num)
{
    if (num <= 1)
        return 1;

    return num * fact(num - 1);
}

int main()
{
    long long n, k;

    cin >> n >> k;

    long long a = fact(n);
    long long b = fact(n - k);
    long long c = fact(k);

    long long d = a / (b * c);

    cout << d;
}