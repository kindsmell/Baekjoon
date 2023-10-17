#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int cnt = 1;

    if(str.length() == 1 && str[0] == ' ')
    {
        cout << 0;
        return 0;
    }

    for(int i = 1; i < str.length() - 1; i++)
    {
        if(str[i] == ' ')
            cnt++;
    }
    //첫번째글자와 마지막글자는 아예 체크를 안 함. 
    cout << cnt;
    
}

//근데 c로 푼거가 더 시간이 짧게나옴