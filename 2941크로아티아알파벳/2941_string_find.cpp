#include <iostream>
#include <string>
#include <vector>
using namespace std;

//str.find("찾는문자");
//반환값은 찾는 문자의 첫번째 인덱스 값
//못 찾으면 string::npos를 반환한다.

//str.replace(a,b,"c");
//a번째 인덱스부터 b만큼 c로 치환

int main() {
    string croatian[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

    int idx;
    string str;
    cin >> str;
    for(int i = 0; i < 8; i++)
    {
        while(1){
            idx = str.find(croatian[i]);
            if(idx == string::npos)
                break;
            str.replace(idx,croatian[i].length(),"#");
        }
    }//ex) str에 있는 c=를 보두 찾아서 #으로 대체 시킨후에 c-검사를 진행한다.
    cout << str.length();
}
