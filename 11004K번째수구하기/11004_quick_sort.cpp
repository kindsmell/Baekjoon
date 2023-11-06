#include <iostream>
#include <vector>
using namespace std;

// 퀵정렬
// idea : pivot을 구간의 제일 앞으로 옮겨놓는다. 그러고 나중에 pivot보다 작은 것이 자명한 원소랑 자리를 swap한다.
void quickSort(vector<int> &A, int S, int E, int k); // 벡터 A를 S에서 E까지 퀵정렬을 진행하는데, k번째를 계속 확인하면서...
int partition(vector<int> &A, int S, int E);         // 벡터 A의 S에서 E까지 퀵 정렬을 하고 pivort가 옮겨진 위치의 인덱스를 반환.
void swap(vector<int> &A, int i, int j);             // algorithm헤더파일 안 쓰고 푸느라 swap함수를 만듦.

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> A(n, 0);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    quickSort(A, 0, n - 1, k - 1); // 인덱스 번호가 매개변수로 들어가야해서 - 1을 해줌.
    cout << A[k - 1];
}

void quickSort(vector<int> &A, int S, int E, int k)
{
    int pivot_idx = partition(A, S, E);

    if (k == pivot_idx)
    {
        return;
    }
    else if (k < pivot_idx)
    {
        quickSort(A, S, pivot_idx - 1, k);
    }
    else
    {
        quickSort(A, pivot_idx + 1, E, k);
    }
}

int partition(vector<int> &A, int S, int E) // pivot을 기준으로 두 개로 나누는 함수
{
    if (S + 1 == E) // 원소가 두개밖에 없을 때에는 옮기거나 엔드를 옮길 필요없이, 그냥 둘이 바로 비교하기만 하면 됨.
    {
        if (A[S] > A[E])
        {
            swap(A, S, E);
        }
        return E;
    }

    int M = (S + E) / 2; // 중앙값
    swap(A, S, M);       // 중앙값과 첫번째 값을 swap
    int pivot = A[S];    // 그 뒤에 첫번째값을 pivot으로 설정 (사실상 중앙값임!)
    int i = S + 1, j = E;

    while (i <= j) // i==j인경우가 아래의 if문에서 만들어지면, 거기서 한 번 더 j--를 해주도록 보장
    {              // pivot보다 작은 애를 가리킨 상태에서 멈추도록 하기 위함.

        while (A[i] < pivot && i < A.size() - 1) // i는 piovt보다 큰 수를 가리킨 상태에서 멈추게 된다.
            i++;

        while (A[j] > pivot && j > 0) // j는 pivot보다 작은 수를 가리킨 상태에서 멈추게된다.
            j--;

        if (i <= j)
            swap(A, i++, j--); // 만약 pivot과 똑같은 수가 있으면 i == j가 됨. i < j라고 해버리면 무한루프에 빠져버림.
    }

    A[S] = A[j];  // A[j]는 pivot보다 작은 애를 가리킨 상태에서 멈춰있으므로 제일 첫번째값과 바꿔준다.
    A[j] = pivot; // pivot이 A[S]의 tmp이니까..
    return j;     // pivot의 인덱스를 반환한다.
}

void swap(vector<int> &A, int i, int j)
{
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
}