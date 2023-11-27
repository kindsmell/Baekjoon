#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    sort(A.begin(), A.end());

    // 두개씩합치기
    if (n == 1)
        cout << A[0];
    else if (n == 2)
        cout << A[0] + A[1];
    else
    {
        int sum = A[0] + A[1];
        for (int i = 2; i < n; i++)
            sum = (sum) + (sum + A[i]);

        cout << sum;
    }
}

/*
틀린이유
: 예를들어....
10 23 25 30 이 있다고하쟈
그러면
10+23 + 33+25 + 91+30
이 되는겨...

근데 10+23으로 만든 카드 33장이 있을 때
25장과 33장을 더하는 것이 아닌
25장과 30장을 더하는 게 더 greedy하니까!
다시 정렬해야함 -> 우선순위 큐를 사용하자
*/