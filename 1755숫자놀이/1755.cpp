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
            rnt.push_back({A, i}); // make_pair보다 가독성이 좋음
            // rnt.push_back(make_pair(A, i)); // 인자들의 타입을 자동매칭
            //  rnt.push_back(pair<string, int>(A,i)); //인자의 타입을 명시해줘야함
        }
        else
        {
            A = eng[i % 10];
            rnt.push_back({A, i});
        }
    }

    sort(rnt.begin(), rnt.end()); // pair를 sort하게 되면, 첫번째 인자를 기준으로 정렬

    for (int i = 0; i < rnt.size(); i++)
    {
        cout << rnt[i].second << " ";
        if (i % 10 == 9) // 한 줄에 10개씩 출력
            cout << "\n";
    }
}