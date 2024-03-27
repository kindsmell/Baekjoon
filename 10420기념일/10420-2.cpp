#include <iostream>
#include <vector>
using namespace std;

// 문제 발견 : 29를 입력했을때와 30을 입력했을 때 똑같이 출력됨
int main()
{
    int year = 2014;
    int month = 4;
    int day = 1;

    int n;
    cin >> n;

    vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (n > 0)
    {
        if (n > days_in_month[month - 1] - day)
        {
            n -= days_in_month[month - 1] - day + 1; // 현재 달의 나머지 날짜와 현재 날짜를 빼기
            day = 1;                                 // 다음 달로 넘어갈 때 날짜를 1로 설정
            month++;                                 // 다음 달로 넘어감
            if (month > 12)
            {
                month = 1;
                year++; // 연도 변경
                // 윤년 처리
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    days_in_month[1] = 29;
                else
                    days_in_month[1] = 28;
            }
        }
        else
        {
            day += n; // 현재 달에 남은 날짜를 더함
            n = 0;    // 입력된 날짜를 모두 소비 break
        }
    }

    // 3. 날짜 출력
    cout.width(4);
    cout.fill('0');
    cout << year << "-";

    cout.width(2);
    cout.fill('0');
    cout << month << "-";

    cout.width(2);
    cout.fill('0');
    cout << day << endl;
}
