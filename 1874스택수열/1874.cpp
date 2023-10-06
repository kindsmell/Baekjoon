#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, numset = 1;

    cin >> n;
    vector<int> bowl(n);
    vector<char> result;

    int num;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        if (num >= numset) //입력받은 num이 numset에서 넣을 수 있는 값이면
        {
            for(; numset <= num; numset++)
            {   
                bowl.push_back(numset);
                result.push_back('+');
            }
            bowl.pop_back();
            result.push_back('-');
        }
        else //입력받은 num이 numset에서 넣을 수 있는 게 아니라 bowl에서 빼서 출력해야하는 값인데
        {
            if(bowl.back() != num) //바아아로 뺄 수 있는 값이 아니면 NO!
            {
                cout << "NO";
                return 0;
            }
            else
            {
                bowl.pop_back();
                result.push_back('-');
            }    
        }
    }
    
    for(char val : result)
        cout << val << "\n";
}