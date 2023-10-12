#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    vector<int> num(str.size(), 0);

    for(int i = 0; i < str.size(); i++)
        num[i] = (str[i] - '0'); // str도 인덱스로 접근 가능
        //Using str.substr(i, 1) - '0' is not the correct way to convert a character to its integer value because str.
        //substr(i, 1) returns a substring of str as a new string, not a single character. The subtraction operator (-) is not defined for strings, so you would get a compilation error.

    for(int i = 0; i < str.size(); i++)
    {
        int max = i;
        for(int j = i + 1; j < str.size(); j++)
        {
            if(num[j] > num[max])
                max = j;
        }    
        swap(num[i], num[max]);
    }

    for(int val : num)
        cout << val;
}