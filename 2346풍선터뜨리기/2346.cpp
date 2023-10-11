#include <iostream>
#include <vector>
using namespace std;

//pop: 종이꺼내고 0심고
//1번째 풍선 == 0번인덱스 출력할 때는 i + 1을 해야됨
//n번째 풍선 == n - 1 인덱스
//제일 처음에는 1번풍선을 터뜨린다.

int idx_system(int i, int paper, int n, vector<int> &A, int k)
{
    i = (i + paper % n + n) % n;

    if(k != n -1)
    {   
        while(paper > 0 && A[i] == 0)
            i = (i + 1) % n;
        while(paper < 0 && A[i] == 0)
            i = (i - 1 + n) % n;
    }

    return i;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> A(n);

    for(int i = 0; i < n; i++)
        cin >> A[i];

    int i = 0;
    for(int k = 0; k < n; k++)
    {
        int paper = A[i];
        A[i] = 0;
        cout << (i + 1) << " ";
        i = idx_system(i, paper, n, A, k);
    }
}

//틀렸음...뭐가 틀린거지

