#include <iostream>
#include <vector>
using namespace std;

// 0월 == 4월
// 1일 == 1일
// year = year + n / 365 를 해버리면 윤년처리가 안되잖아 1년이 366일인 년도가 생긴단 말이지

int cld[12][32];
int main()
{
    int year = 2014;
    int month = 4;
    int day = 2;

    int n;
    cin >> n;

    for (int j = 0; j < 12; j++)
    {
        int k;
        int end;
        if (j == 0)
            k = 2;
        else
            k = 1;

        if (j == 0 || j == 2 || j == 5 || j == 7)
            end = 30;
        else if (j == 10 && (year % 4 != 0))
            end = 28;
        else if (j == 10 && (year % 4 == 0))
            end = 29;
        else
            end = 31;

        for (; k < end; k++)
        {
            cld[j][k] = 1;
            n--;
            if (n == 0)
            {
                month = (j + 4) % 12;
                day = k;
            }
        }
    }

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
