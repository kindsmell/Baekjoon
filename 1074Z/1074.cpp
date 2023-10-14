#include <iostream>
#include <cmath>
using namespace std;

int n, r, c; // r(행)은 y, c(열)은 x
int ans = 0;
void find(int x, int y, int len) //len은 한 변의 길이
{
    if(c == x && r == y){
        cout << ans;;
        return;
    }
    else if(x <= c && c < x + len && y <= r && r < y + len)
    {
        find(x, y, len / 2);
        find(x + len / 2, y, len / 2);
        find(x, y + len / 2, len /2);
        find(x + len / 2, y + len / 2, len /2);
    }
    else{
        ans += len * len;
    }
}

int main()
{
    cin >> n >> r >> c;
    find(0, 0, pow(2, n));
    return 0;
}

