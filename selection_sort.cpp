#include <iostream>
using namespace std;

int main () {
    int arr[5]={232,6,857,4,57},index;

    for (int i=0;i<4;i++) {
        index=i;
        for(int j=i+1; j<5; j++) {
            if (arr[index]>arr[j]) {
                index=j;
            }
        }
        if (i!=index) {
    arr[i]=arr[i] + arr [index];
    arr[index]=arr[i] - arr [index];
    arr[i]=arr[i] - arr[index];
        }
    }

    for (int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}