#include<iostream>
using namespace std;

int arrMax(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0; i<size; i++){
        // if(arr[i]>maxi){
        //     maxi=arr[i];
        // }
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int arrMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter the sisze of array";
    cin>>size;

    int arr[100];

    for(int i=0; i<size; i++){
       cin>>arr[i];
    }

    int result=arrMax(arr,size);
    int result1=arrMin(arr,size);

    cout<<result<<endl;
    cout<<result1<<endl;

    return 0;
}