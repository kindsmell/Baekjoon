#include <iostream>
#include <deque>
using namespace std;

//컨베이어 벨트... 저글링 같은 알고리즘 ! -> 덱 사용하기
//1번 풍선 인덱스 0
//n번 풍선 인덱스 n -1
//종이에 쓰여진 것과 몇번째 풍선인지를 함께 저장
int main()
{
    int n;

    cin >> n;
    
    deque<pair<int, int>> dq;
    int paper;
    for(int i = 0; i < n; i++)
    {
        cin >> paper;
        dq.push_back(make_pair(i + 1, paper));
    }

    while(!dq.empty())
    {
        int cnt = dq.front().second; //종이에 적혀 있는 수를 옮겨놓고
        cout << dq.front().first << " ";
        dq.pop_front();

        if (dq.empty())
            break;
        if(cnt > 0) //종이에 적혀있는 수가 3이면 2번 뒤로 보내야함.
        {
            for(int i = 1; i <= cnt - 1; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else //종이에 적혀있는 수가 음수라면
        {
            for(int i = 1; i <= (-1) * cnt; i++) //종이에 적혀있는 수가 -1이면 한 번 앞으로 옮김
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }


}