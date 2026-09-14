#include<iostream>
using namespace std;

int main(){
    int arr[10]={22,45,1,33,12,10,11,5,12,10};
    int n=10;

    //  Before sorting Array
    cout<< "Before sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    // Insertion sort->"Pick i-th element, insert it at correct position in the already-sorted left part, shift the rest
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j;

        for(j=i-1; j>=0 && arr[j]>key; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }

    cout<<endl;

    cout<< "After sorting :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}