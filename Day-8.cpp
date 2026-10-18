
#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    int c;
    if(n==1) return a;
    if(n==2) return b;

    for (int i = 3; i <= n; i++) {

        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    int result=fibonacci(n);
    cout<<result<<endl;
    return 0;
}

 