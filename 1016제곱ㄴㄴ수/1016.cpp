#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

/*
제곱수로 나누어떨어지지 않는다 == 제곱 ㄴㄴ 수
카운트하기.
에라토스테네스의 체 응용

1. 제곱수 인지 확인
2. 제곱수의 배수들 다 지우기

min이상 max이하에서 찾기
max와 min사이에 있는 수는 최대 1,000,000개

*/

int main()
{
    long long min, max, cnt = 0; // min최댓값이 1,000,000,000,000이라서 long long으로 받아줘야함.

    cin >> min >> max;

    vector<int> A(max - min + 1, 0);

    for (long long i = 2; i * i <= max; i++)
    {
        long long pow = i * i; // 제곱수 ex) 2의 제곱수는 4, 4의 배수를 찾아서 다 지우면 됨
        long long start = min / pow;

        if (min % pow != 0)
            start++;
        // 여기까지가 범위 내에서 처음으로 제곱수 pow로 나누어떨어지는 수를 찾는 과정이다
        while (start * pow <= max)
        {
            A[start * pow - min] = 1;
            start++;
        }
    }

    for (int val : A)
    {
        if (val == 0)
            cnt++;
    }

    cout << cnt;
}
