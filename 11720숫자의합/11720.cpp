#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n, sum = 0;
    string num;
    
    cin >> n;
    cin >> num;
    
    for(char &val : num)
    {
        sum = sum + val - '0';
    }
    
    cout << sum << endl;
    
    return 0;
    
}