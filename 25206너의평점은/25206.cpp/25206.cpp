#include <iostream>
#include <string>
using namespace std;

string Calp[] = {"A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F"};
double Cnum[] = {4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0};
int Calp_idx(string C);

int main()
{
    double result = 0;
    double Bsum = 0;

    for (int i = 0; i < 20; i++)
    {
        string A, C; // 과목명 등급
        double B;    // 학점

        cin >> A >> B >> C;
        if (C == "P")
            continue;

        Bsum = Bsum + B;
        result = result + B * Cnum[Calp_idx(C)];
    }

    result = result / Bsum;

    cout << result;
}

int Calp_idx(string C)
{
    for (int i = 0; i < (sizeof(Calp) / sizeof(string)); i++)
    {
        if (C == Calp[i])
        {
            return i;
        }
    }
}
