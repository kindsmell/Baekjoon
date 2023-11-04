#include <iostream>
#include <string>
using namespace std;

int sameComp(string A, string B, int *compA, int *compB);
int onlyonediff(string A, string B, int *compA, int *compB);

int main()
{
    int n, cnt = 0;

    cin >> n;

    string A;
    cin >> A;
    int compA[26] = {0};
    for (int i = 0; i < A.size(); i++)
    {
        compA[A[i] - 'A']++;
    }

    for (int i = 0; i < n - 1; i++)
    {

        string B;
        cin >> B;

        int compB[26] = {0};
        for (int i = 0; i < B.size(); i++)
        {
            compB[B[i] - 'A']++;
        }

        if (sameComp(A, B, compA, compB) || onlyonediff(A, B, compA, compB))
            cnt++;
    }

    cout << cnt;
}

int sameComp(string A, string B, int *compA, int *compB)
{
    if (A.size() != B.size())
        return 0;

    for (int i = 0; i < 26; i++)
    {
        if (compA[i] != compB[i])
            return 0;
    }

    return 1;
}

int onlyonediff(string A, string B, int *compA, int *compB)
{
    if (abs(int(A.size()) - int(B.size())) > 1)
        return 0;

    int diff1cntA = 0;
    int diff1cntB = 0;
    for (int i = 0; i < 26; i++)
    {
        if ((compA[i] - compB[i]) == 1)
            diff1cntA++;
        if ((compA[i] - compB[i] == -1))
            diff1cntB++;
        if (abs(compA[i] - compB[i]) > 1 || diff1cntA + diff1cntB >= 3) // 이거나 1차이 나는게 3번이상 등장하면 안됨
            return 0;
    }

    if (diff1cntA + diff1cntB == 2) // 0 2 2 0 1 1
    {
        if (diff1cntA != 1 || diff1cntB != 1)
            return 0;
    }
    return 1;
}
/*abcd
aced*/
// 이런경우는 1차이나는게 diff1cnt가 2인데 비슷한 단어가 됨