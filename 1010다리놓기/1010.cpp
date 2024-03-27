#include <iostream>
using namespace std;

int A[30][30]; // 0~29 //M N
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < 30; i++)
    {
        A[i][1] = i;
        A[i][0] = 1;
        A[i][i] = 1;
    }
    for (int i = 1; i < 30; i++)
    {
        for (int j = 1; j < 30; j++)
        {
            A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
        }
    }
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;

        cout << A[m][n] << "\n";
    }
}
