#include <iostream>
#include <vector>
using namespace std;

// pair, first를 기준으로 오름차순 정렬하기
// stack이나 queue에 담아볼까
// 오름차순 정렬한대로 queue에 담는다
//  그 다음에 내보낼 때 반납일을 확인
//  그냥...pair의
// 그러기에는 책이 여러권일수도있자나
// 에러!가 발생하는 경우를 카운트하고 최종적으로 k랑 비교해서 1또는 0출력
int main()
{

    int n;
    cin >> n;
    vector<int> date(32);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j < b; j++)
            date[j]++;
    }
    int k;
    cin >> k;

    for (int i = 1; i <= 31; i++)
    {
        if (date[i] > k)
        {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}