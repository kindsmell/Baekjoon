#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//버블정렬로 풀기
//swap함수 사용
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    
    cin >> n;
    vector<int> A(n, 0);

    for(int i = 0; i < n; i++)
        cin >> A[i];
    for(int j = 0; j < n - 1; j++)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(A[i] > A[i + 1])
                swap(A[i], A[i + 1]);
        }
    }   
    for(int val : A)
        cout << val << "\n";
}