#include <iostream>
using namespace std;

void pencil(int eraser[], int x) {

    for (int i=0;i<x;i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>eraser[i];
    }

    cout<<"Input array is: ";
    for(int i=0;i<x;i++) {
        cout<<eraser[i]<<" ";
    }
}

void insertion_sort(int arr[], int x) {
    for(int i=1;i<x;i++) {
        for(int j=i;j>0;j--) {
                if(arr[j] < arr [j-1]){
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
}

int main () {
    int low=0,high=0,x=0,key=0,mid=0;
    cout<<"Enter the number of elements in the array: ";
    cin>>x;
    int eraser[x];
    cout<<"\n";
    pencil(eraser,x);
    cout<<"\n";
    insertion_sort(eraser,x);
    cout<<"\n";
    low=0;
    high=x-1;
    cout<<"Enter key: ";
    cin>>key;
    cout<<"\n";
    
    while(low<=high) {
        mid=(low+high)/2;
        if (eraser[mid]==key) {
            cout<<"The key is found at index: "<<mid;
            break;
        }
        else if (eraser[mid]<key) {
            low=mid + 1;
        }
        else {
            high=mid - 1;
        }
    }
    return 0;
}
