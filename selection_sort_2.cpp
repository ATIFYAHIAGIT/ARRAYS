#include <iostream>
using namespace std;

void array(int arr[], int n ) {
    
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"\n";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return;
}

void selection_sort(int arr[], int n) {

    for(int i=n-1;i>0;i-- ){
        int index=i;
        for(int j=i-1;j>=0;j--) {
            if(arr[index]>arr[j]) {
                index=j;
        }
    } 
    if (i!=index) {
    arr[i]=arr[i] + arr [index];
    arr[index]=arr[i] - arr [index];
    arr[i]=arr[i] - arr[index];
        }
    }

    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main () {
    int n=0;
    
    cout<<"Enter the number of elements of array: ";
    cin>>n;
    int arr[n];
    cout<<"now enter each element: "<<"\n";

    array(arr, n);
    selection_sort(arr,n);
    return 0;
}