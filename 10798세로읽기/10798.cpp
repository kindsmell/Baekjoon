#include <iostream>

using namespace std;

string A[5] = {""};
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    for (int j = 0; j < 15; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (A[i][j] != 0)
            {
                cout << A[i][j];
            }
        }
    }
    return 0;
}