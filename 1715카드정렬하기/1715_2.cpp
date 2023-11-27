#include <iostream>
#include <queue>
using namespace std;

// priority_queue 사용하기 : 원소 추가와 동시에 정렬되게
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        pq.push(tmp);
    }

    int rnt = 0;
    while (!(pq.size() == 1))
    {
        int sum = pq.top();
        pq.pop();
        sum = sum + pq.top();
        pq.pop();
        pq.push(sum);
        rnt = rnt + sum;
    }

    /* 더 깔끔한 코드
    int sum = 0;
     while(pq.size() > 1) {
                int n1, n2;

                n1 = pq.top(), pq.pop();
                n2 = pq.top(), pq.pop();
                sum += (n1 + n2);
                pq.push(n1 + n2);
        }

    cout << sum;
    */

    cout << rnt;
}