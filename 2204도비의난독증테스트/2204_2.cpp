#include <iostream>
#include <string>
using namespace std;

string origin[1001];
int main()
{
    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;
        int idx = 0;
        string output = "{";
        for (int i = 0; i < n; i++)
        {
            string input;
            cin >> input;
            origin[i] = input;

            for (int j = 0; j < input.size(); j++)
                input[j] = tolower(input[j]);

            if (input < output)
            {
                output = input;
                idx = i;
            }
        }
        cout << origin[idx] << "\n";
    }
}