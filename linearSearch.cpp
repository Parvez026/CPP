#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the sisze of array";
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element you want to search" << endl;
    cin >> key;

    int result = linearSearch(arr, size, key);
  if(result){
    cout<<"Element Present";
  }
  else{
    cout<<"Element Not Present in Array";
  }

    return 0;
}