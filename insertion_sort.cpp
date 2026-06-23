#include <iostream>
using namespace std;

void array(int arr[], int x) {
    for(int i=0;i<x;i++) {
        cout<<"Enter the element "<<(i+1)<<": ";
        cin>>arr[i];
        cout<<"\n";
    }
    cout<<"The elements of the array are: ";
    for(int i=0;i<x;i++) {
        cout<<arr[i]<<" ";
    }
    return;
}

void insertion_sort(int arr[], int x) {
    for(int i=1;i<x;i++) {
        for(int j=i;j>0;j--) {
                if(arr[j] > arr [j-1]){
                    arr[j]=arr[j] + arr [j-1];
                    arr[j-1]=arr[j] - arr [j-1];
                    arr[j]=arr[j] - arr[j-1];;
               }
        }
    }

    cout<<"The sorted array is: ";
    for(int i=0;i<x;i++) {
        cout<<arr[i]<<" ";
    }
    return;
}

int main () {
    int x;
    cout<<"Enter the number of elements ot the array: ";
    cin>>x;
    
    int arr[x];
    array(arr,x);
    cout<<"\n";
    insertion_sort(arr,x);
    return 0;
}
