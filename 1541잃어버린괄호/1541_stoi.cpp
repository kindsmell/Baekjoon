#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int result = 0;
    string num;
    bool isMinus = false;

    for (int i = 0; i <= input.size(); i++)
    {
        // 기호를 만났거나, 식이 끝났을 시
        if (input[i] == '-' || input[i] == '+' || i == input.size())
        {
            if (isMinus)
            {
                result -= stoi(num); // 한 글자씩 담아온 string num -> int 변환
                num = "";            // 계산 뒤에는 다시 비우기
            }
            else
            {
                result += stoi(num);
                num = "";
            }
        }
        else // 기호가 아닌 경우(숫자인 경우) -> 한 글자씩 string num에 담는다.
        {
            num += input[i];
        }

        if (input[i] == '-')
        {
            isMinus = true;
        }
    }

    cout << result;
}