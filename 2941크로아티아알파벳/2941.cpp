#include <iostream>
#include <vector>
#include <string>
using namespace std;


int numcalp(vector<string> &A, string &B)
{
    int cnt = 0;
    for (int i = 0; i < B.length();)
    {
        int flag = 0;
        string C = B.substr(i, 2);
        for (int j = 0; j < 8; j++)
        {
            if (C == A[j])
            {
                if (C == "dz" && B[i + 2] == '=')
                {
                    cnt++;
                    i = i + 3;
                    flag = 1;
                    break;
                }
                else if (C != "dz")
                {
                    cnt++;
                    i = i + 2;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {   
            cnt++;
            i++;
        }

    }
    return cnt;
}

int main()
{
    vector<string> A = {"c=", "c-", "dz", "d-", "lj", "nj", "s=", "z="};

    string B;
    cin >> B;

    cout << numcalp(A, B);
    return 0;
}
