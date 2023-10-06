#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{


    int n, num;
    int level = 0;
    int arr[300001] = {0,};
    int sum[300001] = {0,};

    scanf("%d", &n);

    if(n == 0)
    {
        printf("%d", level);
        return 0;
    }
    else
    {   
        for(int i = 1; i <= n; i++)
            scanf("%d", &arr[i]);

        sort(arr, arr + n);

        num = round(n * 0.15);

        for(int i = 1, j = 1; i <= n - num * 2; i++, j++)
            sum[i] = sum[i - 1] + arr[num + j];

        level = round((double)sum[n - num * 2] / (n - num * 2));
        printf("%d", level);
    }
}

//무엇이 틀린 것인지...!