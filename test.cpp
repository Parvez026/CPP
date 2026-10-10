#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    int original=n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n=n/10;
    };
    if(reverse==original)
    cout << "Plindrom";
    else cout<<"Not";
    return 0;
}