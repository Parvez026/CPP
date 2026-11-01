#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}

int main()
{

    int arr[6] = {10, 12, 15, 20, 22, 30};

    int result = binarySearch(arr, 6, 12);
    cout << "Key of 22 Index is  " << result << endl;

    return 0;
}