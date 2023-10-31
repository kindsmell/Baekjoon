#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, double> gradeTable; // map<key, value>를 이용하여 key에 해당하는 value를 저장

    gradeTable["A+"] = 4.5;
    gradeTable["A0"] = 4.0;
    gradeTable["B+"] = 3.5;
    gradeTable["B0"] = 3.0;
    gradeTable["C+"] = 2.5;
    gradeTable["C0"] = 2.0;
    gradeTable["D+"] = 1.5;
    gradeTable["D0"] = 1.0;
    gradeTable["F"] = 0.0;

    string subject;
    double sum = 0, credit, creditSum = 0;
    string grade;

    for (int i = 0; i < 20; i++)
    {
        cin >> subject >> credit >> grade;

        if (grade != "P")
        {
            creditSum += credit;
            sum += credit * gradeTable[grade];
        }
    }

    cout << sum / creditSum;
    return 0;
}