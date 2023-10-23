#include <iostream>
using namespace std;

int main()
{
    int A[6] = {1, 1, 2, 2, 2, 8};
    int B[6];

    for(int i= 0; i < 6; i++)
    {
        cin >> B[i];
        if(B[i] == A[i])
            cout << 0 << " ";
        else if(B[i] > A[i])
            cout << A[i] - B[i] << " ";
        else 
            cout << A[i] - B[i] << " ";
    }
    
}