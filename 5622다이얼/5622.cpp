#include <iostream>
#include <string>
using namespace std;


int main()
{
    int alp[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
    string str;
    cin >> str;

    int sum = 0;

    for(int i = 0; i < str.length(); i++)
        sum+= alp[str[i] - 'A'];
    
    cout << sum;
}
/*
#include <iostream>

using namespace std;

int total=0;
string s;

int main() {
    cin >> s;

    for(int i=0;i<s.size();i++) {
        total+=((int)s[i]-65)/3 + 3; //아스키 코드로 계산

        //예외 처리
        if(s[i] == 'S' ||s[i] == 'V' ||s[i] == 'Y' ||s[i] == 'Z' ) total--;
    }
    cout << total;
}
*/