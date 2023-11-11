#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> A; /// 2차원 벡터 인접리스트
vector<int> visited;   // 방문기록
void DFS(int v);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    A.resize(n + 1);
    visited = vector<int>(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i]) // visited[i]가 0이어야만 실행 == 방문하지 않았을 때에만 실행
        {
            cnt++;
            DFS(i);
        }
    }

    cout << cnt;
}

void DFS(int v) // 재귀함수로 구현
{
    if (visited[v]) // 방문한 것이면 끝냄. 재귀 종료조건
        return;

    visited[v] = 1;

    for (int i : A[v])
    {
        if (visited[i] == 0)
        {
            DFS(i);
        }
    }
}