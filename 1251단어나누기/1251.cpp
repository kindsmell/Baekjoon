#include <iostream> 
#include <string>
using namespace std;

//담고 나서 reverse를 하는 것이 아닌, 애초에 거꾸로 담기

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string result = "{"; //알파벳보다 큰 문자. 제일 큰것을 담아놔야지 최솟값을 구할 때 첫번째 루프에서 첫번째 요소를 담을 수 있다.
    string  A;
    cin >> A;

    for(int i = 0; i < A.length() - 2; i++)
    {
        for(int j = i + 1; j < A.length() - 1; j++)
        {
            string B;
            for(int k = i; k >= 0; k--)
                B = B + A[k];
            
            for(int k = j; k > i; k--)
                B = B + A[k];
            
            for(int k = A.length() - 1; k > j; k--)
                B = B + A[k];
            
            if(B < result)
                result = B;
        }
    }

    cout << result;

}