#include <iostream>
#include <algorithm>
using namespace std;

//삼각형 조건 : 가장 긴 변의 길이 < 다른 두 변의 길이의 합
int main()
{
    int arr[3];
    int result = 0;

    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr + 3);


    if(arr[2] >= arr[0] + arr [1])
        arr[2] = arr[0] + arr[1] - 1;
    result = arr[0] + arr[1] + arr[2];

    cout << result << "\n";

    return 0;
}