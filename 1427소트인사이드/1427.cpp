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
        num[i] = (str[i] - '0'); //str도 인덱스로 접근이

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