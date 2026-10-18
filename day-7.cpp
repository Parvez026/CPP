#include <iostream>
using namespace std;

int countCommonSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    int a;
    int b;
    cout << "Enter the frist number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;

    int result = countCommonSetBits(a) + countCommonSetBits(b);
    cout << result << endl;

    return 0;
}