#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (1)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        string output;
        string tmp_o = "{";
        for (int i = 0; i < n; i++)
        {
            string input;
            cin >> input;

            string tmp_i = input;

            for (int j = 0; j < tmp_i.size(); j++)
                tmp_i[j] = tolower(tmp_i[j]);

            if (tmp_i < tmp_o)
            {
                tmp_o = input;

                for (int j = 0; j < tmp_o.size(); j++)
                    tmp_o[j] = tolower(tmp_o[j]);
                output = input;
            }
                }
        cout << output << "\n";
    }
}