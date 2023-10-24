#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string A;
    cin >> A;
    string B = A;
    reverse(A.begin(), A.end());
    if(A.compare(B) == 0)
    {
        cout << 1;
    }
    else
        cout << 0;
}