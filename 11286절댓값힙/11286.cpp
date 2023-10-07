#include <iostream>
#include <queue>
using namespace std;


//값을 넣음과 동시에 정렬되게 하는 방법 -> 우선순위 큐
struct compare{
    bool operator()(int a, int b){
        int abs_a = abs(a);
        int abs_b = abs(b);
        if(abs_a == abs_b)
            return a > b;
        else
            return abs_a > abs_b;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    priority_queue<int, vector<int>, compare> A;

    int n;
    
    cin >> n;

    int num;

    for(int i = 0; i < n; i++)
    {   
        cin >> num;
        if(num == 0)
            if(A.empty())
                cout << "0\n";
            else
            {    
                cout << A.top() << "\n";
                A.pop();
            }
        else
            A.push(num);
    }
}