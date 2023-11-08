#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
string A;
string eng[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<pair<string, int>> rnt; // pair vector
int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (i >= 10)
        {
            A = eng[i / 10] + " " + eng[i % 10];
            rnt.push_back({A, i}); // make pair vs {}
        }
        else
        {
            A = eng[i % 10];
            rnt.push_back({A, i});
        }
    }

    sort(rnt.begin(), rnt.end());

    for (int i = 0; i < rnt.size(); i++)
    {
        cout << rnt[i].second << " ";
        if (i % 10 == 9) // 한 줄에 10개씩 출력
            cout << "\n";
    }
}