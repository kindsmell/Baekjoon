#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A;

    getline(cin, A);

    int cnt = 0;

    for(int i = 0; i < A.length(); i++)
    {
        if(('a'<= A[i] && A[i] <= 'z') || ('A' <= A[i] && A[i] <= 'Z') )
        {
            if(A[i + 1] == ' ' || i == (A.length() - 1)) //A[i + 1] == '\0'; 도 됨
                cnt++;
        }

    }
    cout << cnt;
}

//공백으로 시작하거나 공백으로 끝날 수 있다.