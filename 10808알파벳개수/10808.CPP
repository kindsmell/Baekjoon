#include <iostream>
#include <string>
using namespace std;

int main()
{
    int alp[26] = {0};
    string A;
    cin >> A;

    for(int i = 0; i < A.length(); i++)
    {
        alp[A[i] - 'a']++;
    }
    
    for(int val : alp)
        cout << val << " ";
}