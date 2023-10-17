#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int t,r;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> r;
        cin >> s;

        for(int j = 0; j < s.length(); j++)
        {
            for(int k = 0; k < r; k++)
            {
                if(s[j] == '\\')
                {
                    cout << '\\';
                    continue;
                }
                cout << s[j];
            }
        }
        cout << '\n';
    }
    
}