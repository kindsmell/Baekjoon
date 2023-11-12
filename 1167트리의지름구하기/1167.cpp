#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

typedef pair<int, int> edge;
vector<vector<edge>> A; // edge를 담은 이차원 배열 (인접리스트로 사용)
vector<int> visited;
vector<int> m_distance;
void BFS(int node);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    A.resize(n + 1);

    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        while (1)
        {
            int e, d;
            cin >> e;
            if (e == -1)
                break;
            cin >> d;
            A[s].push_back(edge(e, d));
        }
    }

    m_distance = vector<int>(n + 1, 0);
    visited = vector<int>(n + 1, 0);
    BFS(1); // 1번 노드에서 각 노드까지의 거리를 모두 기록
    int max = 1;

    for (int i = 2; i <= n; i++) // 어차피 1에서 1거리는 0이니까 2부터 시작
    {
        if (m_distance[max] < m_distance[i]) // max에는 1번 노드에서 거리가 가장 먼 노드의 번호기록
            max = i;
    }

    // 준비작업
    fill(m_distance.begin(), m_distance.end(), 0);
    fill(visited.begin(), visited.end(), 0);

    BFS(max);
    sort(m_distance.begin(), m_distance.end());

    cout << m_distance[n];
}

void BFS(int node)
{
    queue<int> Q;
    visited[node] = 1;

    while (!Q.empty())
    {
        int now_node = Q.front();
        Q.pop();
        for (edge i : A[now_node])
        {
            if (!visited[i.first]) // visited의 값이 0일때만 실행 (방문하지 않았을 때에만)
            {
                visited[i.first] = 1;
                Q.push(i.first);
                m_distance[i.first] = m_distance[now_node] + i.second;
            }
        }
    }
}