#include <iostream>
using namespace std;

void array(int list[], int x) {

    for(int i=0;i<x;i++) {
        cout<<"Enter element"<<" "<<(i+1)<<": ";
        cin>>list[i];
        cout<<"\n";
    }
    return;
}

void bubble_sort(int list[], int x) {
    int index=0;
    for(int i=0;i<x;i++) {
        for(int j=0;j<x-i-1;j++) {
            if (list[j]>list[j+1]) {
                list[j]=list[j] + list[j+1];
                list[j+1] = list[j] - list [j+1];
                list[j]= list[j] - list [j+1];
            }
        }
    }
    return;
}

int main () {
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    int list[x];
    
    array (list,x);

    cout<<"Entered array is: ";
    for(int i=0;i<x;i++) {
        cout<<list[i]<<" ";
    }
    
    cout<<"\n";

    bubble_sort(list,x);

    cout<<"Sorted array is: ";
    for(int i=0;i<x;i++) {
        cout<<list[i]<<" ";
    }
}