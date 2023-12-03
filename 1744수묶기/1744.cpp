#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> positive;
vector<int> negative;
int zero_count;
int result;

int greedy()
{

    sort(positive.begin(), positive.end(), greater<int>()); // 양수 내림차순 5 4 3 2
    sort(negative.begin(), negative.end(), less<int>());    // 음수 오름차순 -5 -4 -3 -2..

    for (int i = 0; i < positive.size() - (positive.size() % 2); i += 2)
        result += positive[i] * positive[i + 1];

    if (positive.size() % 2 == 1)
        result += positive.back();

    for (int i = 0; i < negative.size() - (negative.size() % 2); i += 2)
        result += negative[i] * negative[i + 1];

    if (negative.size() % 2 == 1 && zero_count == 0)
    {
        result += negative.back();
    }

    return result;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int number;
        cin >> number;

        if (number > 1)
            positive.push_back(number);
        else if (number == 1)
            result += 1;
        else if (number == 0)
            zero_count += 1;
        else
            negative.push_back(number);
    }

    cout << greedy() << endl;
}

/*
큐로 했을 때 문제점: 0을 곱하는 것은 절댓값이 작은 음수라서 top이 제일 큰 음수가 되도록, 즉 내림차순으로 정렬했어야하는데 
음수끼리 곱할때는 절댓값이 큰 애들끼리 곱하는 게 유리하므로 오름차순으로 정렬했어햐함. 
그렇다면 음수에 대하여 큐를 두 개 만들거나.. 암튼 번거로움

pop을 하는 방법으로 처리하려고 하면 sort를 두 번해야하는 번거로움이 발생 -> 인덱스를 건너뛰면서 곱하는 게 제일 좋은 방법인듯.