#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    string A = to_string(a * b * c);
    int num[10] = {0};

    for(int i = 0; i < A.size(); i++)
    {
        num[A[i] - '0']++;
    }

    for(int val : num)
        cout << val << '\n';

}