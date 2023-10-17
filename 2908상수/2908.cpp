#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string A;
    string B;

    cin >> A;
    cin >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int a = stoi(A);
    int b = stoi(B);

    if(a > b)
        cout << a;
    else
        cout << b;

}