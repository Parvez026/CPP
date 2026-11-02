#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[7] = {2, 4, 5, 5, 5, 5, 8};

    int result = firstOcc(arr, 6, 5);
    int result1 = lastOcc(arr, 6, 5);

    int result3 = (result1 - result) + 1;
    cout << "First Occurance index is " << result << endl;
    cout << "Last Occurance index is " << result1 << endl;
    cout << "total number of 5 occur is " << result3 << endl;
    return 0;
}