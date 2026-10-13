#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int j = 0;
    for (int i = 0; i < 8; i++)
    {
        int bit = n & 1;
        ans = ans + bit * pow(10, j);
        n = n >> 1;
        j++;
    }
    cout << ans << endl;
    return 0;
}