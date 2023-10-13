#include <iostream>
using namespace std;


int paper[100][100];  //paper[y][x].
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x, y, w = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for(int i = y; i < y + 10; i++)
        {
            for(int j = x; j < x + 10; j++)
            {
                if(paper[i][j] == 0)
                {
                    paper[i][j] = 1;
                    w++;
                }
            }
        }
    }

    cout << w;
}