#include <iostream>
using namespace std;

/*int main()
{

    int n;
    cout << "Enter Number";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}*/

/*int main()
{
    int n;
    cout << "Enter Number";
    cin >> n;
    int i = 1;
    int count=1;
    while (i <= n)
    {
        int j=1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }

        cout << endl;
        i++;
    }
}*/

/*int main()
{
    int n;
    cout << "Enter Number";
    cin >> n;
    int i = 1;
    int count = 1;

    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
           cout<<count<<" ";
           count++;
           j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}*/

/*int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        // int value=i;
        while (j <= n)
        {
            char ch = 'A' +i - 1;
            cout << ch;
            //   value++;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}*/

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char val='A'+i-1;
        while(j<=n){
            cout<<val;
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }
}